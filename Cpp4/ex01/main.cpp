#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << std::endl;


    std::cout << meta->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << std::endl;
    i->makeSound(); 
    j->makeSound();
    meta->makeSound();
    std::cout << std::endl;

    std::cout << "=== Testing Copy Constructor ===" << std::endl;
    Dog originalDog;
    Dog copyDog(originalDog); 
    
    std::cout << "\nTesting if copies are independent:" << std::endl;
    std::cout << "Original Dog type: " << originalDog.getType() << std::endl;
    std::cout << "Copy Dog type: " << copyDog.getType() << std::endl;
    
    std::cout << "\n=== Testing Assignment Operator ===" << std::endl;
    Dog assignedDog;
    assignedDog = originalDog;
    std::cout << std::endl;

    delete meta;
    delete j;
    delete i;

    return 0;
}
