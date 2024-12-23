#ifndef FIXED_HPP
#define FIXED_HPP

#include <cmath>
#include <iostream>

class Fixed
{
    private:
        int value;
        static const int Bits = 8;
    public:
        Fixed();
        Fixed(const Fixed &fixed);
        Fixed &operator=(const Fixed &fixed);
        Fixed(const int value);
        Fixed(const double value);
        ~Fixed();


        int getRawBits(void) const;
        void setRawBits(int const raw);

        float toFloat(void) const;
        int toInt(void) const;

};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);        

#endif