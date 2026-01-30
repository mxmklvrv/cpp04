#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog"){
	// std::cout << "DOG default constructor called" << std::endl;
	_brain = new Brain();
}

Dog::~Dog(){
	// std::cout << "DOG default distructor called" << std::endl;
	delete _brain;
}

Dog::Dog(const Dog& other) : AAnimal(other){
	// std::cout << "DOG copy constructor called" << std::endl;
	_brain = new Brain(*other._brain);
}

Dog& Dog::operator=(const Dog& other){
	if(this != &other){
		AAnimal::operator=(other);
		*_brain = *other._brain; // deep copy, obj assign
		// std::cout << "DOG assignment op called" << std::endl;
	}
	return *this;
}

void Dog::setIdea(int i, const std::string& idea){
	_brain->setIdea(i, idea);
}

const std::string&  Dog::getIdea(int i) const{
	return _brain->getIdea(i);
}
void Dog::makeSound() const{
	std::cout << "Gav Gav Gav" << std::endl;
}