#ifndef UCS_DUMMY_COMPONENT_HPP
#define UCS_DUMMY_COMPONENT_HPP

#include <ucs/core/Component.hpp>

namespace ucs {

class DummyComponent : public Component {
public:
  DummyComponent(std::string name);
  ~DummyComponent();
  void print();
  void name(std::string name);
  std::string name();

private:
  std::string name_;
};

} // namespace ucs

#endif