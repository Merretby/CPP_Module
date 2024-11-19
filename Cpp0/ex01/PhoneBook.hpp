#ifndef PhoneBook_hpp
#define PhoneBook_hpp

#include <iostream>

class PhoneBook
{
    private:
        contact contacts[8];
    public:
        void addContact();
        void searchContact();
        void printContacts();
};

class contact
{
    public:
};

#endif