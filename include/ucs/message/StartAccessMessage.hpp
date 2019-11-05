#ifndef UCS_STARTACCESS_MESSAGE_HPP
#define UCS_STARTACCESS_MESSAGE_HPP

#include <string>
#include <ucs/message/Message.hpp>

namespace ucs {

class StartAccessMessage : public Message {
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