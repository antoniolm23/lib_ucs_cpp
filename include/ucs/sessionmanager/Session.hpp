#ifndef SESSION_HPP
#define SESSION_HPP

#include <string>
#include <map>
#include <list>
#include <ucs/data/Request.hpp>
#include <ucs/data/Policy.hpp>
#include <ucs/sessionmanager/SessionInfo.hpp>
#include <memory>

namespace ucs
{

class Session
{

public:
    Session();
    Session(Request &request, Policy &policy);
    Session(Request &request, Policy &policy, const SessionInfo &sessionInfo);
    SessionInfo &sessionInfo();
    void sessionInfo(const SessionInfo &sessionInfo);
    std::shared_ptr<Request> const &request();
    void request(Request &request);
    std::shared_ptr<Policy> const &policy();
    void policy(Policy &policy);
    ~Session();

private:
    SessionInfo sessionInfo_;
    std::shared_ptr<Request> request_;
    std::shared_ptr<Policy> policy_;
};

} // namespace ucs

#endif