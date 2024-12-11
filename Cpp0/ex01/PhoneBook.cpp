#include "PhoneBook.hpp"



std::string cheackInput(std::string input)
{
	input.erase(0, input.find_first_not_of(" \t\r\f\v"));
	input.erase(input.find_last_not_of(" \t\n\r\f\v") + 1);
	while (input.empty())
	{
		if(std::cin.eof())
			std::exit (0);
		std::cout << "Please enter a valid input: ";
		std::getline(std::cin, input);
		input.erase(0, input.find_first_not_of(" \t\r\f\v"));
		input.erase(input.find_last_not_of(" \t\n\r\f\v") + 1);
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
	contacts[i].setfirstName(input);
	input.clear();
	//
	std::cout << "Enter last name: ";
	std::getline(std::cin, input);
	input = cheackInput(input);
	contacts[i].setLastName(input);
	input.clear();
	//
	std::cout << "Enter nick name: ";
	std::getline(std::cin, input);
	input = cheackInput(input);
	contacts[i].setNickname(input);
	input.clear();
	//
	std::cout << "Enter phone number: ";
	std::getline(std::cin, input);
	input = cheackInput(input);
	contacts[i].setPhoneNumber(input);
	input.clear();
	//
	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, input);
	input = cheackInput(input);
	contacts[i].setDarkestSecret(input);
	input.clear();
	
	i = (i + 1) % 8;

	this->index++;
	if (this->index >= 8)
		this->index = 8;
}

int check_number(std::string i_contact)
{
	int i;

	if(i_contact.length() != 1)
	{
		if (std::cin.eof())
			std::exit(0);
		std::cout << "index between 0 and 8" << std::endl;
		i_contact.clear();
		std::getline(std::cin, i_contact);
		return(check_number(i_contact));
	}

	i = (i_contact[0] - 48);
	if ((i < 0 || i > 7) && i_contact.length() == 1)
	{
		if (std::cin.eof())
			std::exit (0);
		std::cout << "index between 0 and 8" << std::endl;
		std::getline(std::cin, i_contact);
		i = (i_contact[0] - 48);
		return(check_number(i_contact));
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
		if (contacts[i].getFirstName().length() > 10)
			std::cout << std::setw(10) << contacts[i].getFirstName().substr(0, 9).append(1, '.') << "|";
		else
			std::cout << std::setw(10) << contacts[i].getFirstName()<< "|";
		if (contacts[i].getLastName().length() > 10)
			std::cout << std::setw(10) << contacts[i].getLastName().substr(0, 9).append(1, '.') << "|";
		else
			std::cout << std::setw(10) << contacts[i].getLastName() << "|";
		if (contacts[i].getNickname().length() > 10)
			std::cout << std::setw(10) << contacts[i].getNickname().substr(0, 9).append(1, '.') << "|" << std::endl;
		else
			std::cout << std::setw(10) << contacts[i].getNickname() << "|" << std::endl;
		std::cout << "=----------=----------=----------=----------=" << std::endl;
		i++;
	}

	std::cout << "give me the index ";
	std::getline(std::cin, i_contact);
	if (!std::cin)
		std::exit(0);
	i = check_number(i_contact);
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
	std::exit(0);
}
