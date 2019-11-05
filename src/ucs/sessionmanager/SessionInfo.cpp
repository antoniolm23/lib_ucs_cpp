#include <ucs/sessionmanager/SessionInfo.hpp>
#include <ucs/utility/uuid.hpp>

namespace ucs
{
SessionInfo::SessionInfo()
{
    sessionId_ = ucs::utility::uuid();
}

std::string const &SessionInfo::sessionId() const
{
    return sessionId_;
}

void SessionInfo::externalSessionId(const std::string &sessionId)
{
    externalSessionId_ = sessionId;
}

const std::string &SessionInfo::externalSessionId() const
{
    return externalSessionId_;
}

std::string const &SessionInfo::policyId() const
{
    return policyId_;
}

void SessionInfo::policyId(const std::string &policyId)
{
    policyId_ = policyId;
}

std::string const &SessionInfo::pepId() const
{
    return pepId_;
}

void SessionInfo::pepId(const std::string &pepId)
{
    pepId_ = pepId;
}

std::string const &SessionInfo::request() const
{
    return request_;
}

void SessionInfo::request(const std::string &request)
{
    request_ = request;
}

void SessionInfo::status(SESSION_STATUS status)
{
    status_ = status;
}
SESSION_STATUS SessionInfo::status()
{
    return status_;
}
void SessionInfo::step(EVALUATION_STEP step)
{
    step_ = step;
}
EVALUATION_STEP SessionInfo::step()
{
    return step_;
}
} // namespace ucs