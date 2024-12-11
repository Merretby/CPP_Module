#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";

    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "The memory address of the string variable " << &str << std::endl;
    std::cout << "The memory address of the string pointer " << stringPTR << std::endl;
    std::cout << "The memory address of the string reference " << &stringREF << std::endl;

    std::cout << "The value of the string variable " << str << std::endl;
    std::cout << "The value of the string pointer " << *stringPTR << std::endl;
    std::cout << "The value of the string reference " << stringREF << std::endl;
}
