//
// Created by Tristan Brindle on 10/07/2018.
//

#include "point.hpp"
#include <ostream>

bool operator==(const point& lhs, const point& rhs)
{
    return lhs.x == rhs.x &&
            lhs.y == rhs.y;
}

bool operator!=(const point& lhs, const point& rhs)
{
    //Better to do it this way - 
    return !(lhs == rhs);
    // Rather than:
    //return lhs.x != rhs.x ||
    //        lhs.y != rhs.y;
}

point operator+(const point& lhs, const point& rhs)
{
    return point{lhs.x + rhs.x, lhs.y + rhs.y};
}

point operator-(const point& lhs, const point& rhs)
{
    return point{lhs.x - rhs.x, lhs.y - rhs.y};
}

// This is a member function. Operates on an instance of point
point& point::operator+=(const point& val)
{
    this->x += val.x;
    this->y += val.y;
    return *this;
}

// This is a member function. Operates on an instance of point
point& point::operator-=(const point& val)
{
    //this-> is implicit in this case
    x -= val.x;
    y -= val.y;
    return *this;
}

std::ostream& operator<<(std::ostream& os, const point& val)
{
    os << val.x << " , " << val.y ;
    return os;
}
