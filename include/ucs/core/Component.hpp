#ifndef UCS_COMPONENT_HPP
#define UCS_COMPONENT_HPP

#include <ucs/utility/log.hpp>
#include <ucs/utility/uuid.hpp>

namespace ucs {

class Component {
public:
  Component() {}
  virtual ~Component() {}

  const std::string &uuid() const { return uuid_; }

protected:
private:
  const std::string uuid_ = utility::uuid();
};

} // namespace ucs

#endif
