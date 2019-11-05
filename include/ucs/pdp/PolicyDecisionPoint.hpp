#ifndef POLICY_DECISION_POINT_HPP
#define POLICY_DECISION_POINT_HPP

#include <ucs/data/EvaluationResult.hpp>
#include <ucs/data/Request.hpp>
#include <ucs/data/Policy.hpp>
#include <ucs/core/Component.hpp>

namespace ucs {
    class PolicyDecisionPoint : public Component {
        public: 
        virtual std::unique_ptr<EvaluationResult> performEvaluation(
            const Request &request, const Policy &policy);
    };
}

#endif