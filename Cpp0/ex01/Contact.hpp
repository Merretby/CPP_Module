#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

class Contact
{
    private:
        std::string firstName;
        std::string lastName;
        std::string nickname;
        std::string phoneNumber;
        std::string darkestSecret;
    public:
        Contact();
        std::string getFirstName();
        std::string getLastName();
        std::string getNickname();
        std::string getPhoneNumber();
        std::string getDarkestSecret();
        
        void setfirstName(std::string input);
        void setLastName(std::string input);
        void setNickname(std::string input);
        void setPhoneNumber(std::string input);
        void setDarkestSecret(std::string input);
        ~Contact();
};
#endif