#ifndef CONTEXT_HANDLER_HPP
#define CONTEXT_HANDLER_HPP

#include <memory>
#include <ucs/core/Component.hpp>
#include <ucs/message/AttributeChangedMessage.hpp>
#include <ucs/message/EndAccessMessage.hpp>
#include <ucs/message/ResponseMessage.hpp>
#include <ucs/message/StartAccessMessage.hpp>
#include <ucs/message/TryAccessMessage.hpp>

namespace ucs {

class ContextHandler : public Component {
public:
  virtual std::unique_ptr<ResponseMessage> const &
  tryAccess(TryAccessMessage &tryAccessMessage) = 0;
  virtual std::unique_ptr<ResponseMessage> const &
  startAccess(StartAccessMessage &startAccessMessage) = 0;
  virtual std::unique_ptr<ResponseMessage> const &
  endAccess(EndAccessMessage &endAccessMessage) = 0;
  virtual void
  attributeChanged(AttributeChangedMessage &attributeChangedMessage) = 0;
};

} // namespace ucs

#endif
