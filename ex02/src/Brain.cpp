#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Brain default constructor called" << std::endl;
}
Brain::~Brain(){
	std::cout << "Brain distructor called" << std::endl;
}

Brain::Brain(const Brain& other){
	std::cout << "Brain copy constructor called" << std::endl;
	for( int i = 0; i < 100; i++ )
		_ideas[i] = other._ideas[i];
}

Brain& Brain::operator=(const Brain& other){
	std::cout << "Brain assignment op called" << std::endl;
	if(this != &other){
		for(int i = 0; i < 100; i++)
			_ideas[i] = other._ideas[i];
	}
	return *this;
}

void Brain::setIdea(int i, const std::string& idea){
	_ideas[i] = idea;
}

const std::string& Brain::getIdea(int i) const{
	return _ideas[i];
}
