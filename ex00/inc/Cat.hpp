# pragma once

# include "Animal.hpp"

class Cat : public Animal
{
private:
	/* data */
public:
	Cat();
	~Cat();
	Cat(const Cat& other);
	Cat& operator=(const Cat& other);

	void makeSound() const override;
};
