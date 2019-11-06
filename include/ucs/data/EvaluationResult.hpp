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
  std::list<std::shared_ptr<Instruction>> const &instructions();
  void addInstruction(std::shared_ptr<ucs::Instruction> &instructions);

private:
  RESULT_TYPE result_;
  std::string explanation_;
  std::list<std::shared_ptr<Instruction>> instructions_;
};

} // namespace ucs

#endif