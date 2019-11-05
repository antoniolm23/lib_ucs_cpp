#ifndef SESSION_MANAGER_HPP
#define SESSION_MANAGER_HPP

#include <ucs/sessionmanager/Session.hpp>
#include <ucs/sessionmanager/SessionInfo.hpp>
#include <ucs/sessionmanager/SessionQuery.hpp>
#include <ucs/core/Component.hpp>
#include <memory>

namespace ucs
{

class SessionManager : public Component
{
public:
    virtual std::unique_ptr<SessionInfo> retrieve(const SessionQuery &session) = 0;
    virtual void update(std::string sessionId, SESSION_STATUS status, EVALUATION_STEP evaluationStep) = 0;
    virtual std::unique_ptr<SessionInfo> generate(const SessionQuery &session) = 0;
    virtual void remove(SessionQuery &session) = 0;
};

} // namespace ucs

#endif
