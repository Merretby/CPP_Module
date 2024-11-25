#include "PhoneBook.hpp"

void start()
{
    static int i = 0;
    if (i == 0)
    {
        std::cout << "Please enter a command: " << std::endl;
        i++;
    }
    std::cout << "->  ADD" << " " << "SEARCH" << " " << "EXIT  <-" << std::endl;
}

int main()
{
    PhoneBook PhoneBook;
    std::string line;
    
    PhoneBook.index = 0;
    start();
    std::getline(std::cin, line);
    while(!std::cin.eof())
    {
        if(line == "ADD")
            PhoneBook.addContact();
        else if(line == "SEARCH")
            PhoneBook.searchContact();
        else if (line == "EXIT")
            PhoneBook.exitContact();
        else
        {
            if (line == "")
                std::cout << "Please enter a command" << std::endl;
            else
                std::cout << "Invalid command" << std::endl;
        }
        start();
        std::getline(std::cin, line);
    }
}