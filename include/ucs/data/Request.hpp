#ifndef UCS_REQUEST_HPP
#define UCS_REQUEST_HPP

#include <ucs/data/Document.hpp>
#include <string>

namespace ucs
{

class Request : public Document
{
public:
  Request(){};
  Request(std::string request){};
  ~Request(){};
  Request(Request &){};
  std::string str() const { return ""; };
  void addAttribute(const std::string &attributeId, const std::string &attributeValue) { map_.insert({attributeId, attributeValue}); };
  std::map<std::string, std::string> map() const { return map_; };

private:
  std::map<std::string, std::string> map_;
};

} // namespace ucs

#endif
