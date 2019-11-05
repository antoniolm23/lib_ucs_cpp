#ifndef UCS_POLICY_INFORMATION_POINT_HPP
#define UCS_POLICY_INFORMATION_POINT_HPP

#include <list>
#include <memory>
#include <ucs/core/Component.hpp>
#include <ucs/data/Request.hpp>
#include <ucs/pip/PolicyInformationPointInfo.hpp>
#include <ucs/pip/PolicyInformationPointValue.hpp>

namespace ucs {

class PolicyInformationPoint : public ucs::Component {
public:
  PolicyInformationPoint(PolicyInformationPointInfo info_t) : info_(info_t){};
  ~PolicyInformationPoint(){};

  virtual Request& startMonitor(Request &request,
                            std::string sessionId) = 0;
  virtual void stopMonitor(std::string sessionId) = 0;

  PolicyInformationPointValue monitor(std::string sessionId) {
    sessionIdList.push_back(sessionId);
    return read();
  };
  const PolicyInformationPointInfo &info() const { return info_; };
  virtual bool update(PolicyInformationPointValue pipValue) = 0;
  virtual void start() = 0;
  virtual void stop() = 0;

protected:
  virtual PolicyInformationPointValue read() const = 0;

  std::list<std::string> sessionIdList;

private:
  PolicyInformationPointInfo info_;
};

} // namespace ucs

#endif
