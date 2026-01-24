# pragma once

#include <string>
# include "Animal.hpp"

class Cat
{
private:
	/* data */
public:
	Cat();
	~Cat();
	Cat(const Cat& other);
	Cat& operator=(const Cat& other);
};
