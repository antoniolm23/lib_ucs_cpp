#ifndef UCS_POLICY_SEARCH_PARAMS_HPP
#define UCS_POLICY_SEARCH_PARAMS_HPP

#include <list>
#include <string>

namespace ucs {

enum SearchParam { ANY, POLICY_ID, ATTRIBUTE_ID };

class PolicySearchParams {
public:
  PolicySearchParams(){};
  ~PolicySearchParams(){};
  void setSearchParam(SearchParam searchParam_t) {
    searchParam = searchParam_t;
  }

private:
  SearchParam searchParam = SearchParam::ANY;
};

static PolicySearchParams matchAnyPolicySearchParams;

} // namespace ucs

#endif // UCS_POLICY_SEARCH_PARAMS_HPP