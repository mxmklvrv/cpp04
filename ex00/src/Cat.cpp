#include "Cat.hpp"

Cat::Cat(){
	std::cout << "Cat default comstructor called" << std::endl;
}

Cat::~Cat(){
	std::cout << "Cat default distructor called" << std::endl;
}

Cat::Cat(const Cat& other){
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other){
	if(this != &other){

		std::cout << "Cat assignment op called" << std::endl;
	}
	return *this;
}