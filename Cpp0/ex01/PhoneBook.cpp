#include "PhoneBook.hpp"

std::string cheackInput(std::string input)
{
    while (input.empty())
    {
        if(std::cin.eof())
            exit (0);
        std::cout << "Please enter a valid input: ";
        std::getline(std::cin, input);
    }
    return input;
}

void PhoneBook::addContact()
{
    std::string input;
    static int i = 0;

    std::cout << "Enter first name: ";
    std::getline(std::cin, input);
    input = cheackInput(input);
    if (input.length() > 10)
    {
        input = input.substr(0, 9);
        input.append(1, '.');
        contacts[i].setfirstName(input);
    }
    else
        contacts[i].setfirstName(input);
    input.clear();
    //
    std::cout << "Enter last name: ";
    std::getline(std::cin, input);
    input = cheackInput(input);
    if (input.length() > 10)
    {
        input = input.substr(0, 9);
        input.append(1, '.');
        contacts[i].setLastName(input);
    }
    else
        contacts[i].setLastName(input);
    input.clear();
    //
    std::cout << "Enter nick name: ";
    std::getline(std::cin, input);
    input = cheackInput(input);
    if (input.length() > 10)
    {
        input = input.substr(0, 9);
        input.append(1, '.');
        contacts[i].setNickname(input);
    }
    else
        contacts[i].setNickname(input);
    input.clear();
    //
    std::cout << "Enter phone number: ";
    std::getline(std::cin, input);
    input = cheackInput(input);
    if (input.length() > 10)
    {
        
        input = input.substr(0, 9);
        input.append(1, '.');
        contacts[i].setPhoneNumber(input);
    }
    else
        contacts[i].setPhoneNumber(input);
    input.clear();
    //
    std::cout << "Enter darkest secret: ";
    std::getline(std::cin, input);
    input = cheackInput(input);
    if (input.length() > 10)
    {
        input = input.substr(0, 9);
        input.append(1, '.');
        contacts[i].setDarkestSecret(input);
    }
    else
        contacts[i].setDarkestSecret(input);
    input.clear();
    
    i = (i + 1) % 8;

    this->index++;
    if (this->index >= 8)
        this->index = 8;
}

int check_number(std::string i_contact, int index)
{
    int i;

    if(i_contact.length() != 1)
    {
        if (std::cin.eof())
            exit(0);
        std::cout << "index between 0 and 8 1" << std::endl;
        i_contact.clear();
        std::getline(std::cin, i_contact);
        return(check_number(i_contact, i));
    }

    i = (i_contact[0] - 48);
    if ((i < 0 || i > 7) && i_contact.length() == 1)
    {
        if (std::cin.eof())
            exit (0);
        std::cout << "index between 0 and 8  2" << std::endl;
        std::getline(std::cin, i_contact);
        i = (i_contact[0] - 48);
    }
    return i;
}

void PhoneBook::searchContact()
{
    int i = 0;
    std::string i_contact;

    std::cout << "=----------=----------=----------=----------=" << std::endl;
    std::cout << "|  INDEX   |  F.NAME  |  L.NAME  |  N.NAME  |" << std::endl;
    std::cout << "=----------=----------=----------=----------=" << std::endl;
    while(i < this->index)
    {
        std::cout << "|" << i << "         |" << std::left;
        std::cout << std::setw(10) << contacts[i].getFirstName() << "|";
        std::cout << std::setw(10) << contacts[i].getLastName() << "|";
        std::cout << std::setw(10) << contacts[i].getNickname() << "|" << std::endl;
        std::cout << "=----------=----------=----------=----------=" << std::endl;
        i++;
    }

    std::cout << "give me the index ";
    std::getline(std::cin, i_contact);
    if (!std::cin)
        exit(0);
    i = check_number(i_contact, this->index);
    if (i < this->index)
    {
        std::cout << "First Name: " << contacts[i].getFirstName() << std::endl;
        std::cout << "Last Name: " << contacts[i].getLastName() << std::endl;
        std::cout << "Nick Name: " << contacts[i].getNickname() << std::endl;
        std::cout << "Phone Number: " << contacts[i].getPhoneNumber() << std::endl;
        std::cout << "Darkest Secret: " << contacts[i].getDarkestSecret() << std::endl;
    }
    i_contact.clear();
    i = 0;
}

void PhoneBook::exitContact()
{
    exit(0);
}
