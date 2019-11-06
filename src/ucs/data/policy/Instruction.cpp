#include <ucs/data/policy/Instruction.hpp>
#include <ucs/utility/log.hpp>

namespace ucs
{
Instruction::Instruction()
{
    log::info("Instruction constructor called");
}
Instruction::Instruction(const string &value)
{
    log::info("Instruction constructor called with string: {}", value);
    parse(value);
}

INSTRUCTION_TYPE Instruction::type()
{
    return type_;
}
void Instruction::type(INSTRUCTION_TYPE type)
{
    type_ = type;
}

RESULT_TYPE Instruction::onResult()
{
    return onResult_;
}
void Instruction::onResult(RESULT_TYPE resultType)
{
    onResult_ = resultType;
}
void Instruction::name(const std::string &name)
{
    name_ = name;
}
const std::string &Instruction::name()
{
    return name_;
}
std::list<std::vector<std::string>> &Instruction::assignement()
{
    return assignment_;
}
void Instruction::parse(const std::string &value)
{
    log::info("PARSE CALLED with {}", value);
    std::stringstream stream(value);
    parse(stream);
}
void Instruction::parse(std::stringstream &stream)
{
    log::info("PARSE with stringstream");
    return;
}
Instruction::~Instruction()
{
    log::info("Destructor called for Instructor");
}
} // namespace ucs