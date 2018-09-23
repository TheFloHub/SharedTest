#pragma once

#include <memory>
#include <string>
#include "MySharedLib/MySharedLib.h"

namespace msl {
class Component {
 public:
  MSLAPI Component();

  // TODO: implemented
  MSLAPI Component(const Component &other) = delete;

  // TODO: implemented copy swap idiom
  MSLAPI Component(Component &&other) = delete;

  MSLAPI virtual ~Component();

  // TODO: implemented copy swap idiom
  MSLAPI Component &Component::operator=(Component &&) = delete;

  // TODO: implemented
  MSLAPI Component &Component::operator=(const Component &) = delete;

  // TODO: get rid of string?
  MSLAPI const std::string &getName() const;

  MSLAPI virtual void print() const;

  MSLAPI virtual void run() = 0;

 private:
  class Impl;
  std::unique_ptr<Impl> m_impl;
};
}  // namespace msl
