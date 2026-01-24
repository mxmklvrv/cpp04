#include "Dog.hpp"

Dog::Dog(){
	std::cout << "DOG default comstructor called" << std::endl;
}

Dog::~Dog(){
	std::cout << "DOG default distructor called" << std::endl;
}

Dog::Dog(const Dog& other){
	std::cout << "DOG copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other){
	if(this != &other){

		std::cout << "DOG assignment op called" << std::endl;
	}
	return *this;
}