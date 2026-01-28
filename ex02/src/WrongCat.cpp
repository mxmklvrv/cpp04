#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat"){
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat default distructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other): WrongAnimal(other){
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other){
	if(this != &other){
		_type = other._type; 
		std::cout << "WrongCat assignment op called" << std::endl;
	}
	return *this;
}

void WrongCat::makeSound() const {
	std::cout << "Meow Meow Meow" << std::endl;
}
