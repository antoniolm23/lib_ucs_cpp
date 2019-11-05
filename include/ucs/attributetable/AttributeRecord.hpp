#ifndef ATTRIBUTE_RECORD_HPP
#define ATTRIBUTE_RECORD_HPP

#include <memory>
#include <ucs/attributetable/AttributeHeader.hpp>

namespace ucs {

template <typename T>
class AttributeRecord {
public:
private:
  std::unique_ptr<AttributeHeader> attributeHeader_;
  T value_;
  double confidencelevel_;
};

} // namespace ucs

#endif