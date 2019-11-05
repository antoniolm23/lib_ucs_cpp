#ifndef UCS_TRYACCESS_MESSAGE_HPP
#define UCS_TRYACCESS_MESSAGE_HPP

#include <memory>
#include <ucs/data/Request.hpp>
#include <ucs/message/Message.hpp>

namespace ucs {

class TryAccessMessage : public Message {
public:
  TryAccessMessage();
  ~TryAccessMessage();
  TryAccessMessage(const TryAccessMessage &);
  Request &request() const;
  const std::string &policyId() const;
  const std::string &externalSession() const;
  void request(const std::string &request);
  void policyId(const std::string &policyId);

private:
  std::unique_ptr<Request> request_;
  std::string policyId_;
  std::string externalSession_;
};

} // namespace ucs

#endif