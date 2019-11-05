#include <ucs/data/policy/Expression.hpp>
#include <ucs/utility/log.hpp>
#include <list>
namespace ucs
{

Expression::Expression() : andExpression_(), orExpression_()
{
    ucs::log::debug("Expression constructor");
    operand_.reserve(2);
}

vector<string> &Expression::operand()
{
    ucs::log::debug("Get operand called");
    return operand_;
}

void Expression::addOperand(const string &operand)
{
    ucs::log::debug("add operand called");
    if (operand_.size() == 2)
    {
        ucs::log::debug("invalid add");
    }
    string tmp = operand;
    operand_.push_back(tmp);
}

const string &Expression::operation()
{
    ucs::log::debug("Get operation called");
    return operation_;
}

void Expression::operation(const string &operation)
{
    ucs::log::debug("Set operation called");
    operation_ = operation;
}

const string &Expression::expression()
{
    ucs::log::debug("get operation");
    return expression_;
}
void Expression::expression(const string &expression)
{
    ucs::log::debug("set operation {}", expression);
    if (expression.size() == 0)
    {
        return;
    }
    expression_ = expression;
}
bool Expression::isTime()
{
    ucs::log::debug("get is time");
    return time_;
}
void Expression::isTime(bool isTime)
{
    ucs::log::debug("set time {}", isTime);
    time_ = isTime;
}

void Expression::andExpression(unique_ptr<Expression> andExpression)
{
    ucs::log::debug("set and expression");
    if (andExpression == nullptr)
    {
        ucs::log::debug("And Expression is null");
        return;
    }
    andExpression_.reset();
    andExpression_ = std::move(andExpression);
}
const unique_ptr<Expression> &Expression::andExpression()
{
    ucs::log::debug("get and expression");
    return andExpression_;
}
void Expression::orExpression(unique_ptr<Expression> orExpression)
{
    ucs::log::debug("set or expression");
    if (orExpression == nullptr)
    {
        ucs::log::debug("Or Expression is null");
        return;
    }
    orExpression_.reset();
    orExpression_ = std::move(orExpression);
}
const unique_ptr<Expression> &Expression::orExpression()
{
    ucs::log::debug("get or expression");
    return orExpression_;
}

Expression::~Expression()
{
    ucs::log::info("Destructor called for Expression");
}

string Expression::str()
{
    string str = operand_.at(0) + string(" ") + operation_ + string(" ") + operand_.at(1);
    if (andExpression_ && !andExpression_->isEmpty())
    {
        str += " and " + andExpression_->str();
    }
    else if (orExpression_ && !orExpression_->isEmpty())
    {
        str += " or " + orExpression_->str();
    }
    ucs::log::debug("Expression to STR: {}", str);
    return str;
}

bool Expression::isEmpty()
{
    ucs::log::debug("isEmpty called");
    return operand_.empty();
}

std::list<std::string> Expression::getAttributes()
{
    return std::list<std::string>();
}

} // namespace ucs