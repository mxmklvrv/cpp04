#include "Animal.hpp"

Animal::Animal() : _type("default_animal"){
	// std::cout << "ANIMAL default constructor called" << std::endl;
}
Animal::Animal(const std::string& type) : _type(type){
	std::cout << "ANIMAL constructor called" << std::endl;
}

Animal::~Animal(){
	// std::cout << "ANIMAL default distructor called" << std::endl;
}

Animal::Animal(const Animal& other) : _type(other._type){
	// std::cout << "ANIMAL copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& other){
	if(this != &other){
		_type = other._type;
		// std::cout << "ANIMAL assignment op called" << std::endl;
	}
	return *this;
}

std::string Animal::getType() const {
	return _type;
}
