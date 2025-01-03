#ifndef CAT_HPP 
#define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(std::string type);
        Cat(const Cat &copy);
        Cat &operator=(const Cat &copy);
        void makeSound() const;
        virtual ~Cat();
};

#endif