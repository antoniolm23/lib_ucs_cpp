#ifndef UCS_ENDACCESS_MESSAGE_HPP
#define UCS_ENDACCESS_MESSAGE_HPP

#include <ucs/message/Message.hpp>

namespace ucs {

class EndAccessMessage : public Message {
public:
  std::string const sessionId();
  std::string type() const &;
  std::string source() const &;
  std::string destination() const &;
  std::string id() const &;

private:
  std::string sessionId_;
};

} // namespace ucs

#endif