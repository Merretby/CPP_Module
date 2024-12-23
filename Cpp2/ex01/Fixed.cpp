#include "Fixed.hpp"

Fixed::Fixed()
{
    value = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    // value = fixed.getRawBits();
    *this = fixed;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
    std::cout << "Copy assignation operator called" << std::endl;
    value = fixed.getRawBits();
    return *this;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}

int Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return value;
}

void Fixed::setRawBits(int const raw)
{
    value = raw;
    // std::cout << "setRawBits member function called" << std::endl;
}

Fixed::Fixed(const double value)
{
    std::cout << "Float constructor called" << std::endl;
    this->value = roundf(value * (1 << Bits));
    // std::cout << this->value << " "  << value << std::endl;
}

float Fixed::toFloat(void) const
{
    return (float)value / (1 << Bits);
}

Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called" << std::endl;
    this->value = value << Bits;
}

int Fixed::toInt(void) const
{
    return (value >> Bits);
}
