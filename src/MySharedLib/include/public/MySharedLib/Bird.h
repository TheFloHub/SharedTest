#pragma once

#include "MySharedLib/Animal.h"

namespace msl
{
	class Bird : public Animal
	{
	public:

		void makeSound() const override;

		std::string getName() const override;

	protected:

		std::string m_name = "Bird";

	};
}
