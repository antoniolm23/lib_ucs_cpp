#ifndef UCS_POLICY_HPP
#define UCS_POLICY_HPP

#include <ucs/data/Document.hpp>
#include <ucs/data/policy/Expression.hpp>
#include <ucs/data/policy/Rule.hpp>
#include <ucs/data/EvaluationResult.hpp>
#include <list>
#include <memory>

namespace ucs
{

class Policy : public Document
{
public:
  Policy(){};
  Policy(std::string id) : id_(id){};
  ~Policy(){};
  const std::string id() const { return id_; };
  std::string str() const { return ""; };
  virtual std::list<std::string> getAttributes() { return std::list<std::string>{}; };
  virtual std::unique_ptr<EvaluationResult> evaluate(const Request &request) { return std::make_unique<EvaluationResult>(); };

private:
  std::string id_;
};

} // namespace ucs

#endif
