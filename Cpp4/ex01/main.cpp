#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    Animal *animal_array[8];
    for (int i = 0; i < 4; i++)
    {
        animal_array[i] = new Dog();
        std::cout << std::endl;
        animal_array[i + 4] = new Cat();
    }
    std::cout << "==============================" << std::endl;
    for (int i = 0; i < 8; i++)
        animal_array[i]->makeSound();
    std::cout << "==============================" << std::endl;
    for (int i = 0; i < 8; i++)
        delete animal_array[i];
}
