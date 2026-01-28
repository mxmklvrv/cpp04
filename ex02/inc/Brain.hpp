# pragma once 

#include <iostream>

class Brain
{
private:
	std::string _ideas[100];
public:
	Brain();
	~Brain();
	Brain(const Brain& other);
	Brain& operator=(const Brain& other);

	void setIdea(int i, const std::string& idea);
	const std::string& getIdea(int i) const;
};
