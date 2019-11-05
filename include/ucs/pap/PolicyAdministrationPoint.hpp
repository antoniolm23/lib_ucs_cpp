#ifndef UCS_POLICY_ADMINISTRATION_POINT_HPP
#define UCS_POLICY_ADMINISTRATION_POINT_HPP

#include <list>
#include <memory>
#include <ucs/core/Component.hpp>
#include <ucs/data/Policy.hpp>
#include <ucs/pap/PolicySearchParams.hpp>

namespace ucs {

class PolicyAdministrationPoint : public Component {
public:
  PolicyAdministrationPoint(){};
  ~PolicyAdministrationPoint(){};
  virtual std::unique_ptr<Policy> get(const std::string &policyId) = 0;
  std::unique_ptr<Policy> get(const Policy &policy) {
    return get(policy.id());
  };
  virtual bool insert(const Policy &policy) = 0;
  virtual bool update(const Policy &policy) = 0;
  virtual bool remove(const std::string &policyId) = 0;
  bool remove(const Policy &policy) { return remove(policy.id()); };
  std::list<Policy> list() { return {}; };
  virtual std::list<Policy>
  search(const PolicySearchParams &policySearchParams) = 0;
};

} // namespace ucs

#endif
