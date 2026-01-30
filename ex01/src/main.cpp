#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"


void test1(void){
	std::cout << std::string(50, '+') << std::endl;
	std::cout << "Subject test" << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;
	std::cout << std::endl;
}

void test2(void){
	std::cout << std::string(50, '+') << std::endl;
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
	std::cout << std::endl;
}

void test3(void){
	std::cout << std::string(50, '+') << std::endl;
	std::cout << "Dog Brain test" << std::endl;
	Dog pes1;
	pes1.setIdea(0, "run");
	pes1.setIdea(1,"sniff");
	std::cout << "pes1 first idea: " << pes1.getIdea(0) << std::endl;
	std::cout << "pes1 second idea: " << pes1.getIdea(1) << std::endl;
	Dog pes2(pes1);
	std::cout << "pes2 first idea: " << pes2.getIdea(0) << std::endl;
	std::cout << "pes2 second idea: " << pes2.getIdea(1) << std::endl;

	Dog pes3;
	pes3.setIdea(0, "eat");
	pes3.setIdea(1, "play");

	pes1 = pes3;
	std::cout << "pes1 new first idea: " << pes1.getIdea(0) << std::endl;
	std::cout << "pes1 new second idea: " << pes1.getIdea(1) << std::endl;
	std::cout << std::endl;
}

void test4(void){
	std::cout << std::string(50, '+') << std::endl;
	std::cout << "Cat Brain test" << std::endl;
	Cat kot1;
	kot1.setIdea(0, "run");
	kot1.setIdea(1,"sniff");
	std::cout << "kot1 first idea: " << kot1.getIdea(0) << std::endl;
	std::cout << "kot1 second idea: " << kot1.getIdea(1) << std::endl;
	Cat kot2(kot1);
	std::cout << "kot2 first idea: " << kot2.getIdea(0) << std::endl;
	std::cout << "kot2 second idea: " << kot2.getIdea(1) << std::endl;

	Cat kot3;
	kot3.setIdea(0, "eat");
	kot3.setIdea(1, "play");

	kot1 = kot3;
	std::cout << "kot1 new first idea: " << kot1.getIdea(0) << std::endl;
	std::cout << "kot1 new second idea: " << kot1.getIdea(1) << std::endl;
	std::cout << std::endl;

}

int main()
{
	test1();
	test2();
	test3();
	test4();

}
