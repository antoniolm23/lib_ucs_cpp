#ifndef UCS_RESPONSE_MESSAGE_HPP
#define UCS_RESPONSE_MESSAGE_HPP

#include <memory>
#include <ucs/data/EvaluationResult.hpp>
#include <ucs/message/Message.hpp>

namespace ucs
{

class ResponseMessage : public Message
{
public:
  ResponseMessage();
  ~ResponseMessage();
  std::string const sessionId() { return ""; };
  std::shared_ptr<EvaluationResult> const evaluationResult()
  {
    return std::make_shared<EvaluationResult>();
  };

private:
  std::string sessionId_;
  std::shared_ptr<EvaluationResult> evaluationResult_;
};

} // namespace ucs

#endif
