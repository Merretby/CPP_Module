#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat constructor called" << std::endl;
    this->type = "Cat";
    brain = new Brain();
}

Cat::Cat(std::string type)
{
    std::cout << "Cat constructor called" << std::endl;
    this->type = type;
    brain = new Brain();
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
    std::cout << "Cat copy constructor called" << std::endl;
    this->brain = new Brain(*copy.brain);
}

Cat &Cat::operator=(const Cat &copy)
{
    std::cout << "Cat assignation operator called" << std::endl;
    if (this != &copy)
    {
        Brain* newBrain = new Brain(*copy.brain); 
        delete brain;                             
        brain = newBrain;                         
        this->type = copy.type;
    }
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Cat Make meows sound" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}