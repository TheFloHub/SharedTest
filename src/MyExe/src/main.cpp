#include <MySharedLib/Component.h>
#include <MySharedLib/ComponentA.h>
#include <MySharedLib/System.h>

#include <iostream>
#include <memory>

using namespace std;
using namespace msl;

int main(int argc, char *argv[]) {
  System system;
  system.addComponent(new Component);
  system.addComponent(new Component);
  system.print();

  // std::cin.ignore();
  return 0;
}