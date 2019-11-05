#include <ucs/sessionmanager/Session.hpp>

#include <memory>

namespace ucs
{
Session::Session()
{
}

Session::Session(Request &request, Policy &policy)
{
    request_ = std::make_shared<Request>(request);
    policy_ = std::make_shared<Policy>(policy);
}

Session::Session(Request &request, Policy &policy, const SessionInfo &sessionInfo)
{
    sessionInfo_ = sessionInfo;
    request_ = std::make_shared<Request>(request);
    policy_ = std::make_shared<Policy>(policy);
}

void Session::policy(Policy &policy)
{
    policy_ = std::make_shared<Policy>(policy);
}

std::shared_ptr<Policy> const &Session::policy()
{
    return policy_;
}

void Session::sessionInfo(const SessionInfo &sessionInfo)
{
    sessionInfo_ = sessionInfo;
}

SessionInfo &Session::sessionInfo()
{
    return sessionInfo_;
}

void Session::request(Request &request)
{
    request_ = std::make_shared<Request>(request);
}

std::shared_ptr<Request> const &Session::request()
{
    return request_;
}

Session::~Session()
{
}

} // namespace ucs
