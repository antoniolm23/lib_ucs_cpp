#include <ucs/utility/utility.hpp>
#include <ucs/utility/log.hpp>

namespace ucs
{
namespace utility
{
void tokenize(list<string> &tokens, const string &expr, const string &delimiter)
{
    {
        size_t postPos = 0, pos = 0;
        while ((postPos = expr.find(delimiter, pos)) != std::string::npos)
        {
            string token = expr.substr(pos, (postPos - pos));
            pos = postPos + 1;
            tokens.push_back(token);
        }
        tokens.push_back(expr.substr(pos));
    }
}
} // namespace utility
}