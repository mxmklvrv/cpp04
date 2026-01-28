#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal* sobaka = new Dog();
	Animal* koshka = new Cat();

	std::cout << "sobaka type is: " << sobaka->getType() << std::endl;
	std::cout << "koshka type is: " << koshka->getType() << std::endl;

	sobaka->makeSound();
	koshka->makeSound();

	//Animal zhivotnoe;

	delete sobaka;
	delete koshka;
}
