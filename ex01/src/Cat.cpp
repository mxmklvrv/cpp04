#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){
	std::cout << "Cat default constructor called" << std::endl;
	try{
		_brain = new Brain();
	}
	catch(const std::bad_alloc& e){
		std::cerr << e.what() << std::endl; // should print std err msg
	}
}

Cat::~Cat(){
	std::cout << "Cat default distructor called" << std::endl;
}

Cat::Cat(const Cat& other): Animal(other){
	std::cout << "Cat copy constructor called" << std::endl;
	try{
		_brain = new Brain(*other._brain);
	}
	catch(const std::bad_alloc& e){
		std::cerr << e.what() << std::endl;
	}
	
}

Cat& Cat::operator=(const Cat& other){
	if(this != &other){
		_type = other._type; 
		delete this->_brain;
		try{
			_brain = new Brain(*other._brain);
		}
		catch(const std::bad_alloc& e){
			std::cerr << e.what() << std::endl;
			_brain = nullptr;
		}
		std::cout << "Cat assignment op called" << std::endl;
	}
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Meow Meow Meow" << std::endl;
}
