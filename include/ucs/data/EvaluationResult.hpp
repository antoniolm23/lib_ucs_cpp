#ifndef EVALUATION_RESULT_HPP
#define EVALUATION_RESULT_HPP

#include <list>
#include <string>
#include <ucs/data/policy/Instruction.hpp>
#include <memory>
namespace ucs
{

class EvaluationResult
{
public:
  EvaluationResult();
  ~EvaluationResult();
  RESULT_TYPE result() const;
  void result(RESULT_TYPE result);
  std::string explanation();
  void explanation(const std::string &explanation);
  std::list<ucs::Instruction> const &instructions();
  void addInstruction(const ucs::Instruction &instructions);

private:
  RESULT_TYPE result_;
  std::string explanation_;
  std::list<ucs::Instruction> instructions_;
};

} // namespace ucs

#endif