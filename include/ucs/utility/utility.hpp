#ifndef UCS_UTILITY_UTILITY_HPP
#define UCS_UTILITY_UTILITY_HPP

#include <string>
#include <list>

using std::list;
using std::string;

namespace ucs
{
namespace utility
{
void tokenize(list<string> &tokens, const string &expr, const string &delimiter);
}
} // namespace ucs

#endif