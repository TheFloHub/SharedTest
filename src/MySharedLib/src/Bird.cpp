#include "MySharedLib/Bird.h"
#include <iostream>

using namespace std;

void msl::Bird::makeSound() const
{
	cout << "Piep!" << endl;
}

std::string msl::Bird::getName() const
{
	return "Bird";
}
