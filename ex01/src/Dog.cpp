#include "Dog.hpp"

Dog::Dog() : Animal("Dog"){
	std::cout << "DOG default constructor called" << std::endl;
	_brain = new Brain();
}

Dog::~Dog(){
	std::cout << "DOG default distructor called" << std::endl;
	delete _brain;
}

Dog::Dog(const Dog& other) : Animal(other){
	std::cout << "DOG copy constructor called" << std::endl;
	_brain = new Brain(*other._brain);
}

Dog& Dog::operator=(const Dog& other){
	if(this != &other){
		delete _brain;
		Animal::operator=(other);
		*_brain = *other._brain; // deep copy, obj assign
		std::cout << "DOG assignment op called" << std::endl;
	}
	return *this;
}

void Dog::makeSound() const{
	std::cout << "Gav Gav Gav" << std::endl;
}