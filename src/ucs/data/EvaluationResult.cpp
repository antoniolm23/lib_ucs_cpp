#include <ucs/data/EvaluationResult.hpp>
#include <ucs/utility/log.hpp>

namespace ucs
{
EvaluationResult::EvaluationResult()
{
    ucs::log::info("EvaluationResult constructor called");
}

RESULT_TYPE EvaluationResult::result() const
{
    return result_;
}

void EvaluationResult::result(RESULT_TYPE result)
{
    result_ = result;
}

std::string EvaluationResult::explanation()
{
    return explanation_;
}

void EvaluationResult::explanation(const std::string &explanation)
{
    explanation_ = explanation;
}

const std::list<Instruction> &EvaluationResult::instructions()
{
    return instructions_;
}

void EvaluationResult::addInstruction(const Instruction &instruction)
{
    instructions_.push_back(instruction);
}

EvaluationResult::~EvaluationResult()
{
    ucs::log::info("EvaluationResult destructor called");
}
} // namespace ucs