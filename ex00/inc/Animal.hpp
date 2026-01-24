#pragma once

#include <string>
#include <iostream>

class Animal
{
private:

protected: 
	std::string _type;
public:
	Animal();
	Animal(const Animal& other);
	Animal& operator=(const Animal& other);
	~Animal();
};

