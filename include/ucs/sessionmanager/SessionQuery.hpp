#ifndef UCS_SESSION_MANAGER_SESSION_QUERY_HPP
#define UCS_SESSION_MANAGER_SESSION_QUERY_HPP

#include <string>
#include <list>

namespace ucs
{
class SessionQuery
{
public:
    SessionQuery();
    ~SessionQuery();
    void policyId(const std::string &policyId);
    std::string const &policyId() const;
    void addQueriedAttribute(const std::string &attribute);
    std::list<std::string> getQueriedAttribute() const;
    void sessionId(const std::string &sessionId);
    std::string const &sessionId() const;

private:
    std::string policyId_;
    std::list<std::string> attributes_;
    std::string sessionId_;
};
} // namespace ucs

#endif