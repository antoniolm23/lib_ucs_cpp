#ifndef ATTRIBUTE_MANAGER_HPP
#define ATTRIBUTE_MANAGER_HPP

#include <string>
#include <ucs/Component.hpp>
#include <ucs/attributetable/AttributeHeader.hpp>
#include <ucs/attributetable/AttributeRecord.hpp>

namespace ucs {

class AttributeTableManager : public Component {
public:
  virtual AttributeRecord<std::string> const &
  retrieve(AttributeHeader attributeInfo) = 0;
  virtual void add(AttributeRecord<std::string> &attributeRecord) = 0;
  virtual void deleteAll();
};
} // namespace ucs

#endif