#include <iostream>
#include <ucs/core/DummyComponent.hpp>
#include <ucs/utility/log.hpp>

namespace ucs {

DummyComponent::DummyComponent(std::string name) : name_(name) {}

DummyComponent::~DummyComponent() {}

void DummyComponent::print() { ucs::log::info("{}", this->name()); }

std::string DummyComponent::name() { return this->name_; }

void DummyComponent::name(std::string name) { this->name_ = name; }

} // namespace ucs
