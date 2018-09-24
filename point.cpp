//
// Created by Tristan Brindle on 10/07/2018.
//

#include "point.hpp"

bool operator==(const point& lhs, const point& rhs)
{
    return lhs.x == rhs.x &&
            lhs.y == rhs.y;
}

bool operator!=(const point& lhs, const point& rhs)
{
    return lhs.x != rhs.x ||
            lhs.y != rhs.y;
}

point operator+(const point& lhs, const point& rhs)
{
    return point{lhs.x + rhs.x, lhs.y + rhs.y};
}

point operator-(const point& lhs, const point& rhs)
{
    return point{lhs.x - rhs.x, lhs.y - rhs.y};
}

point operator+=(const point& val)
{
    return point{this.x += val.x, this.y += val.y};
}


point operator-=(const point& val)
{
    return point{this.x -= val.x, this.y -= val.y};
}

std::ostream& operator<<(const point& val)
{
    return std::ostream << val.x << " , " << val.y ;
}
