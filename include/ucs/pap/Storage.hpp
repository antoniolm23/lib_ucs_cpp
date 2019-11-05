#ifndef UCS_STORAGE_HPP
#define UCS_STORAGE_HPP

#include <iostream>
#include <list>

namespace ucs {

class Storage {
public:
  virtual ~Storage(){};
  virtual const std::string read(const std::string &uri) = 0;
  virtual bool write(const std::string &uri, const std::string &contents) = 0;
  virtual bool remove(const std::string &uri) = 0;
  virtual bool contains(const std::string &uri) = 0;
};

} // namespace ucs

#endif