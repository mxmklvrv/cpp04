#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
int main()
{

Animal animal;
Cat	cat;
Dog dog;

Animal wild_cat = cat;
Animal wild_dog(dog);

animal.makeSound();
wild_cat.makeSound();
wild_dog.makeSound();
cat.makeSound();
dog.makeSound();
std::cout << wild_cat.getType() << std::endl;
std::cout << wild_dog.getType() << std::endl;
std::cout << cat.getType() << std::endl;
std::cout << dog.getType() << std::endl;

std::cout << std::string("+", 25) << std::endl;
std::cout << "Subject tests" <<std::endl;

const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound();
j->makeSound();
meta->makeSound();

delete meta;
delete j;
delete i;

return 0;
}