#include <boost/uuid/uuid.hpp>
#include <boost/uuid/uuid_generators.hpp>
#include <boost/uuid/uuid_io.hpp>
#include <sstream>

#include <ucs/utility/uuid.hpp>

namespace ucs
{
namespace utility
{

const std::string uuid()
{
  std::ostringstream oss;
  oss << boost::uuids::random_generator()();
  return oss.str();
}

} // namespace utility
} // namespace ucs
