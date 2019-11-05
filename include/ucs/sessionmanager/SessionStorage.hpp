#ifndef SESSION_STORAGE_HPP
#define SESSION_STORAGE_HPP

#include <string>
#include <list>
#include <ucs/sessionmanager/SessionInfo.hpp>
#include <ucs/sessionmanager/SessionQuery.hpp>
#include <ucs/core/Component.hpp>

namespace ucs
{
class SessionStorage : public Component
{
public:
    virtual void add(SessionInfo &sessionInfo) = 0;
    virtual SessionInfo const &retrieve(const SessionQuery &sessionQuery) = 0;
    virtual std::list<SessionInfo> retrieveAll() = 0;
    virtual void remove(SessionInfo &sessionInfo) = 0;
    virtual void remove(const SessionQuery &sessionQuery) = 0;
    virtual void removeAll() = 0;
};
} // namespace ucs

#endif