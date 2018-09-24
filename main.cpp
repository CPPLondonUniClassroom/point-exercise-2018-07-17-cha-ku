
#include "point.hpp"

#include <cassert>

int main()
{
    // Test operator ==
    {
        const point p1{1, 2};
        const point p2 = p1;
        const point p3{3, 4};

        assert(p1 == p2);
        assert(!(p1 == p3));
    }

    // Test operator !=
    {
        const point p1{1, 2};
        const point p2{3, 4};
        const point p3 = p1;

        assert(p1 != p2);
        assert(!(p1 != p3));
    }

    // Test operator +
    {
        const point p1{1, 2};
        const point p2{10, 20};
        const point p3{11, 22};

        assert (p3 == p1 + p2);
    }

    //Test operator -
    {
        const point p2{1, 2};
        const point p1{10, 20};
        const point p3{9, 18};

        assert (p3 == p1 - p2);
    }

    //Test operator +=
    {
        const point p1{10, 20};
        const point p2{2, 3};
        const point result{12, 23};
        p1 += p2;
        assert(result == p1);
    }

    //Test operator -=
    {
        const point p1{10, 20};
        const point p2{2, 3};
        const point result{8, 17};
        p1 -= p2;
        assert(result == p1);
    }

    //Test operator <<
    std::cout << point{1, 2} << '\n';
}
