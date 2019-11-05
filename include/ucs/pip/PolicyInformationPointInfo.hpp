#ifndef UCS_POLICY_INFORMATION_POINT_INFO_HPP
#define UCS_POLICY_INFORMATION_POINT_INFO_HPP

#include <list>
#include <ucs/core/Component.hpp>

namespace ucs {

class PolicyInformationPointInfo {
public:
  PolicyInformationPointInfo(std::string id_t) : id_(id_t) {};
  PolicyInformationPointInfo(std::string id_t, std::string category_t,
                             std::string type_t)
      : id_(id_t), category_(category_t), type_(type_t){};
  ~PolicyInformationPointInfo();

  const std::string &id() const { return id_; }
  const std::string &category() const { return category_; }
  const std::string &type() const { return type_; }

private:
  std::string id_;
  std::string category_;
  std::string type_;
};

} // namespace ucs

#endif