#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat b("John", 150);
    std::cout << b;
    try
    {
        b.incrementGrade();
    }
    catch (std::exception &e)
    {
        std::cout << "bad info" << std::endl;
    }
    std::cout << b;
    b.decrementGrade();
    std::cout << b;
    return 0;
}