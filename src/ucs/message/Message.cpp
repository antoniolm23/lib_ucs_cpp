#include <ucs/message/Message.hpp>

namespace ucs
{

Message::Message() {}

Message::Message(std::string source, std::string destination, std::string type)
    : type_(source), source_(destination), destination_(type), id_("msg_1") {}

Message::Message(const Message &message)
{
  type_ = message.type();
  source_ = message.source();
  destination_ = message.destination();
  id_ = message.id();
}

const std::string Message::type() const { return type_; }

const std::string Message::source() const { return source_; }

const std::string Message::destination() const { return destination_; }

const std::string Message::id() const { return id_; }

} // namespace ucs