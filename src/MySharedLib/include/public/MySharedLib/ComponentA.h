#pragma once

#include "MySharedLib/Component.h"

namespace msl
{

class ComponentA : public Component
{
public:
  MSLAPI ComponentA();

  // TODO: implemented
  MSLAPI ComponentA(const ComponentA & other) = delete;

  // TODO: implemented copy swap idiom
  MSLAPI ComponentA(ComponentA && other) = delete;

  MSLAPI virtual ~ComponentA();

  // TODO: implemented copy swap idiom
  MSLAPI ComponentA & ComponentA::operator=(ComponentA &&) = delete;

  // TODO: implemented
  MSLAPI ComponentA & ComponentA::operator=(const ComponentA &) = delete;

  MSLAPI void print() const override;

  MSLAPI void run() override;

private:
  class Impl;
  std::unique_ptr<Impl> m_impl;
};
} // namespace msl
