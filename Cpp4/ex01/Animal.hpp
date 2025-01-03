#ifndef ANIMAL_HPP 
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal 
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(std::string type);
        Animal(const Animal &copy);
        Animal &operator=(const Animal &copy);
        std::string getType() const;
        void virtual makeSound() const;
        virtual ~Animal();
};

#endif