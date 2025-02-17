#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat &copy);
        Bureaucrat &operator=(const Bureaucrat &copy);
        ~Bureaucrat();
        std::string getName() const;
        int getGrade() const;
        void incrementGrade();
        void decrementGrade();

        class GradeTooLowException : public std::exception
	    {
	        public:
		        virtual const char *what() const throw();
	    };

	    class GradeTooHighException : public std::exception
	    {
	        public:
	    	    virtual const char *what() const throw();
	    };
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif