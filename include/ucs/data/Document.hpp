#ifndef UCS_DOCUMENT_HPP
#define UCS_DOCUMENT_HPP

#include <list>
#include <string>

namespace ucs {

class Document {
public:
  Document(){};
  virtual ~Document(){};
  virtual std::string str() const = 0;

private:
};

} // namespace ucs

#endif
