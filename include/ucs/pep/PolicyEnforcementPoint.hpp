#ifndef POLICY_ENFORCEMENT_POINT_HPP
#define POLICY_ENFORCEMENT_POINT_HPP

#include <ucs/message/ResponseMessage.hpp>
#include <ucs/core/Component.hpp>

namespace ucs {
    class PolicyEnforcementPoint : public Component {
        public:
        virtual void onEvaluationChanged(ResponseMessage reevaluationMessage) = 0;
    };
}

#endif