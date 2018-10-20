#include "MySharedLib/Component.h"
#include <iostream>

using namespace std;

namespace msl
{
class Component::Impl
{
public:
  Impl() = default;

  // TODO: implemented
  Impl(const Impl & other) = delete;

  // TODO: implemented copy swap idiom
  Impl(Impl && other) = delete;

  ~Impl() = default;

  // TODO: implemented copy swap idiom
  Impl & Impl::operator=(Impl &&) = delete;

  // TODO: implemented
  Impl & Impl::operator=(const Impl &) = delete;

  const std::string & getName() const;

  void print() const;

private:
  std::string m_name = "MyComponent";
};

const std::string & Component::Impl::getName() const { return m_name; }

void Component::Impl::print() const
{
  cout << "Component name: " << m_name << endl;
}

} // namespace msl

/* ----------------------------------------------------------------------- */

msl::Component::Component() : m_impl(new Component::Impl) {}

msl::Component::~Component() = default;

const std::string & msl::Component::getName() const
{
  return m_impl->getName();
}

void msl::Component::print() const { m_impl->print(); }