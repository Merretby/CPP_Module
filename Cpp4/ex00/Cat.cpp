#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat constructor called" << std::endl;
    this->type = "Cat";
}

Cat::Cat(std::string type)
{
    std::cout << "Cat constructor called" << std::endl;
    this->type = type;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = copy;
}

Cat &Cat::operator=(const Cat &copy)
{
    std::cout << "Cat assignation operator called" << std::endl;
    this->type = copy.type;
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