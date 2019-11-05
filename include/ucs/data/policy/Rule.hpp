#ifndef UCS_DATA_POLICY_RULE_HPP
#define UCS_DATA_POLICY_RULE_HPP

#include <string>
#include <ucs/data/policy/Result.hpp>
#include <ucs/data/policy/Expression.hpp>
#include <ucs/data/policy/Instruction.hpp>
#include <ucs/data/EvaluationResult.hpp>
#include <ucs/data/Request.hpp>
#include <memory>
#include <list>
#include <sstream>

namespace ucs
{
using std::list;
using std::string;
using std::unique_ptr;

class Rule
{
public:
    Rule();
    Rule(string string);
    virtual ~Rule();
    virtual unique_ptr<EvaluationResult> evaluate(const Request &request) { return std::make_unique<EvaluationResult>(); };
    virtual void parse(const string &expression) { return; };
    virtual void parse(std::stringstream &parse) { return; }
    const string &name();
    void name(const string &name);
    RESULT_TYPE result();
    void result(RESULT_TYPE result);
    unique_ptr<Expression> &target();
    unique_ptr<Expression> &condition();
    list<Instruction> &instructions();
    void instructions(const list<Instruction> &instructions);
    virtual std::string const str();
    virtual list<std::string> getAttributes() = 0;

protected:
    string name_;
    RESULT_TYPE result_;
    unique_ptr<Expression> target_;
    unique_ptr<Expression> condition_;
    list<Instruction> instructions_;
};
} // namespace ucs

#endif
