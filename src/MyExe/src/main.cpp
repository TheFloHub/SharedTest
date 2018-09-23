#include <MySharedLib/System.h>
#include <MySharedLib/ComponentA.h>

#include <iostream>
#include <memory>

using namespace std;
using namespace msl;

int main(int argc, char *argv[]) {
  System system;
  system.addComponent(new ComponentA);
  system.addComponent(new ComponentA);
  system.print();
  system.run();
  system.print();

  // std::cin.ignore();
  return 0;
}