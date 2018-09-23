#pragma once

// TODO: shouldn't this files include no headers of the std template library?

#include <memory>
#include <string>
#include "MySharedLib/MySharedLib.h"

namespace msl {
class Component;

class System final {
 public:
  MSLAPI System();

  // TODO: implemented 
  MSLAPI System(const System &other) = delete;

  // TODO: implemented copy swap idiom
  MSLAPI System(System &&other) = delete;

  MSLAPI ~System();

  // TODO: implemented copy swap idiom
  MSLAPI System &System::operator=(System &&) = delete;

  // TODO: implemented 
  MSLAPI System &System::operator=(const System &) = delete;

  MSLAPI void addComponent(Component *c);

  // TODO: get rid of string?
  MSLAPI const std::string &getName() const;

  MSLAPI void print() const;

  MSLAPI virtual void run();

 private:
  class Impl;
  // TODO: why can I use stl class here?
  // TODO: const forward in experimental
  std::unique_ptr<Impl> m_impl;
};
}  // namespace msl
