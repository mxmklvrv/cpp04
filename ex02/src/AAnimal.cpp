#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("default_animal"){
	// std::cout << "ANIMAL default constructor called" << std::endl;
}
AAnimal::AAnimal(const std::string& type) : _type(type){
	std::cout << "AANIMAL constructor called" << std::endl;
}

AAnimal::~AAnimal(){
	// std::cout << "AANIMAL default distructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& other) : _type(other._type){
	// std::cout << "AANIMAL copy constructor called" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& other){
	if(this != &other){
		_type = other._type;
		// std::cout << "AANIMAL assignment op called" << std::endl;
	}
	return *this;
}

std::string AAnimal::getType() const {
	return _type;
}
