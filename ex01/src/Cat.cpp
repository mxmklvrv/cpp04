#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){
	// std::cout << "Cat default constructor called" << std::endl;
	_brain = new Brain();
}

Cat::~Cat(){
	std::cout << "Cat default distructor called" << std::endl;
	delete _brain;
}

Cat::Cat(const Cat& other): Animal(other){
	// std::cout << "Cat copy constructor called" << std::endl;
	_brain = new Brain(*other._brain);
}

Cat& Cat::operator=(const Cat& other){
	// std::cout << "Cat assignment op called" << std::endl;
	if(this != &other){
		Animal::operator=(other);
		*_brain = *other._brain; // deep copy, brain ass op
	}
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Meow Meow Meow" << std::endl;
}

void Cat::setIdea(int i, const std::string& idea){
	_brain->setIdea(i, idea);
}

const std::string&  Cat::getIdea(int i) const{
	return _brain->getIdea(i);
}