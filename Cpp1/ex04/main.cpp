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
        std::ifstream input(filename.c_str());
        std::string line;

        if (s1.empty() || s2.empty())
        {
            std::cerr << "Error: s1 and s2 must not be empty" << std::endl;
            return 1;
        }
        if (!input.is_open())
        {
            std::cerr << "Error: could not open file" << std::endl;
            return 1;
        }

        std::string output = filename + ".replace";
        std::ofstream replace(output.c_str());
        if (!replace.is_open())
        {
            std::cerr << "Error: could not create file" << std::endl;
            return 1;
        }
        while (std::getline(input, line))
        {
            size_t pos = 0;
            while ((pos = line.find(s1, pos)) != std::string::npos)
            {
                line.erase(pos, s1.length());
                line.insert(pos, s2);
                pos += s2.length();
            }
            replace << line << "\n";
        }
        input.close();
        replace.close();
        return 0;
    }
}