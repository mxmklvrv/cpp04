#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"


void	test1(void){
std::cout << std::string(50, '+') << std::endl;
std::cout << "Basic Constructors tests" << std::endl;

Animal animal;
Cat	cat;
Dog dog;

Animal wild_cat = cat;
Animal wild_dog(dog);

std::cout << "Sound tests: " << std::endl;
std::cout << std::endl;

std::cout <<"animal makes: "; 
animal.makeSound();
std::cout << std::endl;

std::cout <<"wild_cat makes: ";
wild_cat.makeSound();
std::cout << std::endl;

std::cout <<"wild_dog makes: ";
wild_dog.makeSound();
std::cout << std::endl;

std::cout <<"cat makes: ";
cat.makeSound();
std::cout << std::endl;

std::cout <<"cat makes: ";
dog.makeSound();
std::cout << std::endl << std::endl;

std::cout << "getType tests" << std::endl;

std::cout <<"wild_cat type is: "<< wild_cat.getType() << std::endl;
std::cout <<"wild_dog type is: " <<wild_dog.getType() << std::endl;
std::cout << "cat type is: " << cat.getType() << std::endl;
std::cout <<"dog type is: " << dog.getType() << std::endl;

std::cout << std::endl;
}

void test2(void){
std::cout << std::string(50, '+') << std::endl;
std::cout << "Subject tests 1" <<std::endl;

const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << "j type is: " << j->getType() << std::endl;
std::cout << "i type is: " <<  i->getType() << std::endl;
std::cout << "i sound is: ";
i->makeSound();
std::cout << std::endl;
std::cout << "j sound is: ";
j->makeSound();
std::cout << std::endl;
std::cout << "meta sound is: ";
meta->makeSound();
std::cout << std::endl;
delete meta;
delete j;
delete i;

}

void test3(void){
std::cout << std::string(50, '+') << std::endl;
std::cout << "Subject tests" <<std::endl;

const WrongAnimal* alfa = new WrongAnimal();
const WrongAnimal* delta = new WrongCat();

std::cout << "alfa type is: " << alfa->getType() << std::endl;
std::cout << "delta type is: " << delta->getType() << std::endl;
std::cout << std::endl;
std::cout << "alfa sound is: ";
alfa->makeSound();
std::cout << std::endl;
std::cout << "delta sound is: ";
delta->makeSound();
std::cout << std::endl;

delete alfa;
delete delta;

}


int main()
{

// test1();
// test2();
// test3();

Animal a;
a.makeSound();

return 0;
}