#include "Dog.hpp"

Dog::Dog() : Animal("Dog"){
	std::cout << "DOG default constructor called" << std::endl;
}

Dog::~Dog(){
	std::cout << "DOG default distructor called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other){
	std::cout << "DOG copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other){
	if(this != &other){
		_type = other._type;
		std::cout << "DOG assignment op called" << std::endl;
	}
	return *this;
}

void Dog::makeSound() const{
	std::cout << "Gav Gav Gav" << std::endl;
}