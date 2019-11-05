#include <ucs/message/TryAccessMessage.hpp>

namespace ucs
{

TryAccessMessage::TryAccessMessage()
{
  policyId_ = "";
  externalSession_ = "";
  request_ = std::make_unique<Request>();
}

TryAccessMessage::~TryAccessMessage() {}

TryAccessMessage::TryAccessMessage(const TryAccessMessage &message)
    : Message(message)
{
  policyId_ = message.policyId();
  externalSession_ = message.externalSession();
  request_ = std::unique_ptr<Request>(new Request(message.request()));
}

Request &TryAccessMessage::request() const { return *request_.get(); }

const std::string &TryAccessMessage::policyId() const { return policyId_; }

const std::string &TryAccessMessage::externalSession() const
{
  return externalSession_;
}

void TryAccessMessage::request(const std::string &request) { return; }
void TryAccessMessage::policyId(const std::string &policyId)
{
  policyId_ = policyId;
}

} // namespace ucs