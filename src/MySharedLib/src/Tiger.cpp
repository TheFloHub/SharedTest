#include "MySharedLib/Tiger.h"
#include <iostream>

using namespace std;

void msl::Tiger::makeSound() const
{
	cout << "Roaw!" << endl;
}

std::string msl::Tiger::getName() const
{
	return "Tiger";
}
