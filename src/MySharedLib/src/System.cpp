#include "MySharedLib/System.h"
#include "MySharedLib/Component.h"
#include <iostream>
#include <vector>

using namespace std;

namespace msl
{
class System::Impl
{
public:
  Impl() = default;

  // TODO: implemented
  Impl(const Impl & other) = delete;

  // TODO: implemented copy swap idiom
  Impl(Impl && other) = delete;

  ~Impl();

  // TODO: implemented copy swap idiom
  Impl & Impl::operator=(Impl &&) = delete;

  // TODO: implemented
  Impl & Impl::operator=(const Impl &) = delete;

  void addComponent(Component * c);

  const std::string & getName() const;

  void print() const;

  void run();

private:
  std::string m_name = "MySystem";

  // TODO: const forward in experimental??
  std::vector<Component *> m_components{};
};

System::Impl::~Impl()
{
  for (auto c : m_components)
  {
    delete c;
  }
  m_name.clear();
}

void System::Impl::addComponent(Component * c) { m_components.emplace_back(c); }

const std::string & System::Impl::getName() const { return m_name; }

void System::Impl::print() const
{
  cout << m_name << " has components: " << endl;
  for (auto c : m_components)
  {
    c->print();
  }
}
void System::Impl::run()
{
  cout << "Running system " << m_name << "." << endl;
  for (auto c : m_components)
  {
    c->run();
  }
}
} // namespace msl

/* ----------------------------------------------------------------------- */

msl::System::System() : m_impl(new System::Impl) {}

msl::System::~System() = default;

void msl::System::addComponent(Component * c) { m_impl->addComponent(c); }

const std::string & msl::System::getName() const { return m_impl->getName(); }

void msl::System::print() const { m_impl->print(); }

void msl::System::run() { m_impl->run(); }
