#ifndef SESSION_INFO_HPP
#define SESSION_INFO_HPP

#include <string>

namespace ucs
{

enum SESSION_STATUS
{
    ON_GOING,
    EVALUATED,
    STOP
};
enum EVALUATION_STEP
{
    TRY,
    START,
    END,
    REEVALUATION
};

class SessionInfo
{
public:
    SessionInfo();
    std::string const &sessionId() const;
    std::string const &request() const;
    void request(const std::string &request);
    std::string const &policyId() const;
    void policyId(const std::string &policyId);
    std::string const &pepId() const;
    void pepId(const std::string &pepId);
    void status(SESSION_STATUS status);
    SESSION_STATUS status();
    void step(EVALUATION_STEP step);
    EVALUATION_STEP step();
    void externalSessionId(const std::string &extenralSession);
    std::string const &externalSessionId() const;

private:
    std::string externalSessionId_;
    std::string sessionId_;
    std::string request_;
    std::string policyId_;
    std::string pepId_;
    SESSION_STATUS status_;
    EVALUATION_STEP step_;
};

} // namespace ucs

#endif
