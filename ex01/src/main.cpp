#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"


void test1(void){
	std::cout << "Subject test" << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;
	std::cout << std::endl;
}

void test2(void){
	std::cout << "Array of pointers to Animal" << std::endl;

	int num = 10;

	Animal* animals[num];
	try{
		for (int i = 0; i < num; i++){
			if(i < num / 2 )
				animals[i] = new Dog();
			else
				animals[i] = new Cat();
			std::cout <<std::endl;
	}
	}
	catch(const std::bad_alloc& e){
		std::cerr << e.what() << '\n';
		for(int j = 0; j < num; j++)
			delete animals[j];
	}
	for (int i = 0; i < num; i++)
		animals[i]->makeSound();
	for (int i = 0; i < num; i++)
		delete animals[i];
}

int main()
{
	test1();
	test2();
	
}
