#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(std::string type);
        WrongCat(const WrongCat &copy);
        WrongCat &operator=(const WrongCat &copy);
        void makeSound() const;
        virtual ~WrongCat();
};

#endif