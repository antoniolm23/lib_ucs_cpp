#ifndef ATTRIBUTE_STORAGE_HPP
#define ATTRIBUTE_STORAGE_HPP

#include <string>
#include <ucs/core/Component.hpp>
#include <ucs/attributetable/AttributeRecord.hpp>
namespace ucs
{

template <typename T>

class AttributeStorage : public Component
{
public:
  virtual AttributeRecord<std::string> const &
  retrieve(AttributeHeader attributeHeader) = 0;
  virtual void add(AttributeRecord<T> attributeRecord) = 0;
  virtual void removeAll() = 0;
  virtual void remove(AttributeHeader attributeHeader);
};

} // namespace ucs

#endif