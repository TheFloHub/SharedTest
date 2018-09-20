#pragma once

#include "MySharedLib/MySharedLib.h"
#include <string>

namespace msl
{
	class Animal
	{
	public:

		virtual void makeSound() const = 0;

		virtual std::string getName() const = 0;

	protected:

	};
}
