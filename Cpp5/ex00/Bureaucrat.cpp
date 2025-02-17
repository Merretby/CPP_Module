#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const name, int grade) : name(name)
{
    std::cout << "Bureaucrat constructor called" << std::endl;
    this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : name(copy.name), grade(copy.grade)
{
    std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy) 
{
    std::cout << "Bureaucrat assignation operator called" << std::endl;
    if (this != &copy)
        this->grade = copy.grade;
    return *this;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructor called" << std::endl;
}

int Bureaucrat::getGrade() const
{
    return grade;
}

std::string Bureaucrat::getName() const
{
    return name;
}

void Bureaucrat::incrementGrade()
{
    grade--;
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade()
{
    grade++;
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
}


std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat)
{
    out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
    return out;
}