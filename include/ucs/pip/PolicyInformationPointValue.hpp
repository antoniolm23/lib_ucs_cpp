#ifndef UCS_POLICY_INFORMATION_POINT_VALUE_HPP
#define UCS_POLICY_INFORMATION_POINT_VALUE_HPP

#include <list>
#include <ucs/core/Component.hpp>

namespace ucs {

class PolicyInformationPointValue {
public:
  PolicyInformationPointValue(std::string value_t) : value_(value_t){};
  PolicyInformationPointValue(std::string value_t, std::string type_t)
      : value_(value_t), type_(type_t){};
  ~PolicyInformationPointValue();

  const std::string &value() const { return value_; }
  const std::string &type() const { return type_; }

private:
  std::string value_;
  std::string type_;
};

} // namespace ucs

#endif