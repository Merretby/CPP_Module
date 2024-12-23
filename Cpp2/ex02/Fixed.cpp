#include "Fixed.hpp"

Fixed::Fixed()
{
    value = 0;
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed &fixed)
{
    *this = fixed;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
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
    return value;
}

void Fixed::setRawBits(int const raw)
{
    value = raw;
}

Fixed::Fixed(const double value)
{
    this->value = roundf(value * (1 << Bits));
}

float Fixed::toFloat(void) const
{
    return (float)value / (1 << Bits);
}

Fixed::Fixed(const int value)
{
    this->value = value << Bits;
}

int Fixed::toInt(void) const
{
    return (value >> Bits);
}

Fixed Fixed::operator+(const Fixed &fixed) const
{
    return Fixed(toFloat() + fixed.toFloat());
}

Fixed Fixed::operator-(const Fixed &fixed) const
{
    return Fixed(toFloat() - fixed.toFloat());
}

Fixed Fixed::operator*(const Fixed &fixed) const
{
    return Fixed(toFloat() * fixed.toFloat());
}

Fixed Fixed::operator/(const Fixed &fixed) const
{
    return Fixed(toFloat() / fixed.toFloat());
}

bool Fixed::operator>(const Fixed &fixed) const
{
    return (value > fixed.getRawBits());
}

bool Fixed::operator<(const Fixed &fixed) const
{
    return (value < fixed.getRawBits());
}

bool Fixed::operator>=(const Fixed &fixed) const
{
    return (value >= fixed.getRawBits());
}

bool Fixed::operator<=(const Fixed &fixed) const
{
    return (value <= fixed.getRawBits());
}

bool Fixed::operator==(const Fixed &fixed) const
{
    return (value == fixed.getRawBits());
}

bool Fixed::operator!=(const Fixed &fixed) const
{
    return (value != fixed.getRawBits());
}

Fixed &Fixed::operator++()
{
    value++;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    operator++();
    return tmp;
}

Fixed &Fixed::operator--()
{
    value--;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    operator--();
    return tmp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if (a < b)
        return a;
    return b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a < b)
        return a;
    return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a > b)
        return a;
    return b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a > b)
        return a;
    return b;
}
