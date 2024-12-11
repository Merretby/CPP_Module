#include <iostream>
#include <string>

int main(int ac, char **av)
{
    std::string str;
    if (ac >= 2)
    {
        for (int i = 1; i < ac; i++)
        {
            str = av[i];
            for (int j = 0; j < str.length(); j++)
            {
                std::cout << (char)toupper(str[j]);
            }
            str.clear();
        }
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << std::endl;
}