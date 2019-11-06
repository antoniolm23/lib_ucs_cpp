#include <ucs/data/policy/Rule.hpp>
#include <ucs/utility/log.hpp>

namespace ucs
{
Rule::Rule()
{
}
Rule::Rule(string string)
{
    parse(string);
}

const string &Rule::name()
{
    return name_;
}

void Rule::name(const string &name)
{
    name_ = name;
}

RESULT_TYPE Rule::result()
{
    return result_;
}

void Rule::result(RESULT_TYPE result)
{
    result_ = result;
}

unique_ptr<Expression> &Rule::target()
{
    return target_;
}

unique_ptr<Expression> &Rule::condition()
{
    return condition_;
}

list<std::shared_ptr<Instruction>> &Rule::instructions()
{
    return instructions_;
}

void Rule::instructions(const list<std::shared_ptr<Instruction>> &instructions)
{
    instructions_ = instructions;
}

const string Rule::str()
{
    return "rule";
}

Rule::~Rule()
{
    log::info("Destructor called for Rule");
}

std::list<std::string> Rule::getAttributes()
{
    return std::list<std::string>{};
}

} // namespace ucs
