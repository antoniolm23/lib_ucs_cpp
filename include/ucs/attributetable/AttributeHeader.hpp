#ifndef ATTRIBUTE_HEADER_HPP
#define ATTRIBUTE_HEADER_HPP

#include <string>

namespace ucs {
class AttributeHeader {
public:
  AttributeHeader();
  AttributeHeader(std::string &attributeName, std::string &deviceId);
  void attributeName(std::string &attributeName);
  const std::string attributeName();
  void deviceId(std::string &deviceId);
  const std::string deviceId();
  const long timestamp();

private:
  std::string attributeName_;
  std::string deviceId_;
  long timestamp_;
};
} // namespace ucs

#endif