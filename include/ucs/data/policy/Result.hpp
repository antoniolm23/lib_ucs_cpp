#ifndef UCS_DATA_POLICY_RESULT_HPP
#define UCS_DATA_POLICY_RESULT_HPP

#include <list>
#include <ucs/data/policy/Instruction.hpp>

namespace ucs
{
using std::list;

class Result
{
private:
    RESULT_TYPE resultType_;
    list<Instruction> instructions_;
};
} // namespace ucs

#endif