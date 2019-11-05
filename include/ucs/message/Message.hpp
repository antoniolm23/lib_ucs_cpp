#ifndef UCS_MESSAGE_HPP
#define UCS_MESSAGE_HPP

#include <string>

namespace ucs
{

class Message
{
public:
  Message();
  Message(std::string source, std::string destination, std::string type);
  Message(const Message &message);
  virtual ~Message(){};
  const std::string type() const;
  const std::string source() const;
  const std::string destination() const;
  const std::string id() const;

protected:
  std::string type_;
  std::string source_;
  std::string destination_;
  std::string id_;
};

} // namespace ucs

#endif
