#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor called" << std::endl;
    this->type = "Dog";
    brain = new Brain();
}

Dog::Dog(std::string type)
{
    std::cout << "Dog constructor called" << std::endl;
    this->type = type;
    brain = new Brain();
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
    std::cout << "Dog copy constructor called" << std::endl;
    this->brain = new Brain(*copy.brain);
}

Dog &Dog::operator=(const Dog &copy)
{
    std::cout << "Dog assignation operator called" << std::endl;
    if (this != &copy)
    {
        Brain* newBrain = new Brain(*copy.brain); 
        delete brain;                             
        brain = newBrain;                     
        this->type = copy.type;
    }
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Dog Make bark sound" << std::endl;
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog destructor called" << std::endl;
}