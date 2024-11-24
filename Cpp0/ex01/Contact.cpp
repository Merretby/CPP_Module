#include "PhoneBook.hpp"

Contact::Contact()
{
    firstName = "";
    lastName = "";
    nickname = "";
    phoneNumber = "";
    darkestSecret = "";
};

std::string Contact::getFirstName() 
{
    return (this->firstName);
};

std::string Contact::getLastName()
{
    return (this->lastName);
};

std::string Contact::getNickname()
{
    return (this->nickname);
};

std::string Contact::getPhoneNumber()
{
    return (this->phoneNumber);
};

std::string Contact::getDarkestSecret()
{
    return (this->darkestSecret);
};

void Contact::setfirstName(std::string input)
{
    this->firstName = input;
};

void Contact::setLastName(std::string input)
{
    this->lastName = input;
};

void Contact::setNickname(std::string input)
{
    this->nickname = input;
};

void Contact::setPhoneNumber(std::string input)
{
    this->phoneNumber = input;
};

void Contact::setDarkestSecret(std::string input)
{
    this->darkestSecret = input;
};

Contact::~Contact()
{
};