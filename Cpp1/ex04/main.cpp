#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cerr << "Usage: ./replace filename s1 s2" << std::endl;
        return 1;
    }
    else
    {
        std::string filename = av[1];
        std::string s1 = av[2];
        std::string s2 = av[3];
        std::ifstream input(filename);
        if (!input)
        {
            std::cerr << "Error: could not open file" << std::endl;
            return 1;
        }
        std::string output = filename + ".replace";
        std::ofstream replace(output);
        if (!replace)
        {
            std::cerr << "Error: could not create file" << std::endl;
            return 1;
        }
    }
}