#ifndef UCS_DATA_POLICY_INSTRUCTION_HPP
#define UCS_DATA_POLICY_INSTRUCTION_HPP

#include <string>
#include <vector>
#include <list>
#include <sstream>
#include <ucs/data/ResultType.hpp>
namespace ucs
{
enum INSTRUCTION_TYPE
{
    ADVICE,
    OBLIGATION
};
using std::string;
class Instruction
{
public:
    Instruction();
    Instruction(const string &string);
    RESULT_TYPE onResult();
    void onResult(RESULT_TYPE resultType);
    void name(const std::string &name);
    const std::string &name();
    std::list<std::vector<std::string>> &assignement();
    virtual void parse(const std::string &value);
    virtual void parse(std::stringstream &stream);
    virtual ~Instruction();
    INSTRUCTION_TYPE type();
    void type(INSTRUCTION_TYPE type);
    virtual const string str() = 0;

protected:
    INSTRUCTION_TYPE type_;
    RESULT_TYPE onResult_;
    string name_;
    std::list<std::vector<std::string>> assignment_;
};

} // namespace ucs

#endif