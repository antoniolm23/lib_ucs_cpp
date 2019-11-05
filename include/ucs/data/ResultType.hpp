#ifndef UCS_DATA_RESULT_TYPE
#define UCS_DATA_RESULT_TYPE

namespace ucs
{
enum RESULT_TYPE
{
    PERMIT,
    DENY,
    RETRY,
    INAPPLICABLE,
    INDETERMINATE,
    ERROR
};

enum EXPRESSION_RESULT_TYPE
{
    VALID = 1,
    INVALID = 0,
    EXPR_ERROR = -1
};
} // namespace ucs

#endif