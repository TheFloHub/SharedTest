#include <MySharedLib/Animal.h>
#include <MySharedLib/Tiger.h>
#include <MySharedLib/Bird.h>

#include <iostream>
#include <memory>

using namespace std;
using namespace msl;

int main(int argc, char *argv[]) 
{ 
	unique_ptr<Animal> a = unique_ptr<Animal>(new Tiger);
	unique_ptr<Animal> b = unique_ptr<Animal>(new Bird);
	a->makeSound();
	b->makeSound();

	std::cin.ignore();
	return 0;
}