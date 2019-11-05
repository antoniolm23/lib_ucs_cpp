#include <ucs/sessionmanager/SessionQuery.hpp>
#include <ucs/utility/log.hpp>

namespace ucs
{
SessionQuery::SessionQuery()
{
    ucs::log::info("SessionQuery constructor");
}

SessionQuery::~SessionQuery()
{
    ucs::log::info("SessionQuery destructor");
}

void SessionQuery::policyId(const std::string &policyId)
{
    policyId_ = policyId;
}

std::string const &SessionQuery::policyId() const
{
    return policyId_;
}
void SessionQuery::addQueriedAttribute(const std::string &attribute)
{
    attributes_.push_back(attribute);
}
std::list<std::string> SessionQuery::getQueriedAttribute() const
{
    return attributes_;
}
void SessionQuery::sessionId(const std::string &sessionId)
{
    sessionId_ = sessionId;
}
std::string const &SessionQuery::sessionId() const
{
    return sessionId_;
}
} // namespace ucs