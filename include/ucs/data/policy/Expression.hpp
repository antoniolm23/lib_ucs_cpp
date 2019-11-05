#ifndef UCS_DATA_POLICY_EXPRESSION_HPP
#define UCS_DATA_POLICY_EXPRESSION_HPP

#include <string>
#include <memory>
#include <vector>
#include <list>
#include <ucs/data/policy/Instruction.hpp>
#include <ucs/data/Request.hpp>

namespace ucs
{
using std::list;
using std::string;
using std::unique_ptr;
using std::vector;

class Expression
{
public:
    Expression();
    //Expression(const string &string);
    //Expression(const Expression &expression);
    virtual void parse(const string &string) = 0;
    virtual EXPRESSION_RESULT_TYPE evaluate(const Request &request) = 0;
    vector<string> &operand();
    void addOperand(const string &operand);
    const string &operation();
    void operation(const string &operation);
    void expression(const string &expression);
    const string &expression();
    bool isTime();
    void isTime(bool isTime);
    void andExpression(unique_ptr<Expression> andExpression);
    const unique_ptr<Expression> &andExpression();
    void orExpression(unique_ptr<Expression> orExpression);
    const unique_ptr<Expression> &orExpression();
    virtual ~Expression();
    virtual string str();
    bool isEmpty();
    virtual list<string> getAttributes();

private:
    vector<string> operand_;
    string operation_;
    string expression_;
    bool time_;
    unique_ptr<Expression> andExpression_;
    unique_ptr<Expression> orExpression_;
};
} // namespace ucs

#endif