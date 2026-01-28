#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal* sobaka = new Dog();
	Animal* koshka = new Cat();

	std::cout << "sobaka type" << sobaka->getType() << std::endl;
	std::cout << "koshka type" << koshka->getType() << std::endl;

	delete sobaka;
	delete koshka;
}
