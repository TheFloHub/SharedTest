#include "MySharedLib/ComponentA.h"
#include <iostream>

using namespace std;

namespace msl {
class ComponentA::Impl {
 public:
  Impl() = default;

  // TODO: implemented
  Impl(const Impl& other) = delete;

  // TODO: implemented copy swap idiom
  Impl(Impl&& other) = delete;

  ~Impl() = default;

  // TODO: implemented copy swap idiom
  Impl& Impl::operator=(Impl&&) = delete;

  // TODO: implemented
  Impl& Impl::operator=(const Impl&) = delete;

  void print() const;

  void run();

 private:
  float m_a = 4.0f;
  float m_b = 234.0f;
};

void ComponentA::Impl::print() const {
  // TODO: there access problem here
  // impl should be protected in Component
  // and moved into a seperate header and cpp.
  // In the simplest case we just need a back reference here.
  // Component::print();
  // cout << m_name << endl;
  cout << "A: " << m_a << endl;
  cout << "B: " << m_b << endl;
}

void ComponentA::Impl::run() {
  m_a *= 4.3f;
  m_b *= 1.3f;
}

}  // namespace msl

/* ----------------------------------------------------------------------- */

msl::ComponentA::ComponentA() : m_impl(new ComponentA::Impl) {}

msl::ComponentA::~ComponentA() = default;

void msl::ComponentA::print() const { m_impl->print(); }

void msl::ComponentA::run() { m_impl->run(); }