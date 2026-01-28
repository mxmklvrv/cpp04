#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongDefault_animal"){
	std::cout << "WrongANIMAL default constructor called" << std::endl;
}
WrongAnimal::WrongAnimal(const std::string& type) : _type(type){
	std::cout << "WrongANIMAL constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongANIMAL default distructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : _type(other._type){
	std::cout << "WrongANIMAL copy constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other){
	if(this != &other){
		_type = other._type;
		std::cout << "WrongANIMAL assignment op called" << std::endl;
	}
	return *this;
}

std::string WrongAnimal::getType() const {
	return _type;
}

void WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal sounds" << std::endl;
}
