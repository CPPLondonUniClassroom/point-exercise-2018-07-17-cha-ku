

#ifndef WEEK11_POINT_EXERCISE_POINT_HPP
#define WEEK11_POINT_EXERCISE_POINT_HPP

struct point {
    int x = 0;
    int y = 0;

    // These HAVE TO BE member functions because they modify the thing they are operating on
    // So, *kind of* assignment operator
    // Also, so that operators can be chained val += j += i.... (Do as the ints do!!)
    point& operator+=(const point& val);

    point& operator-=(const point& val);
};

bool operator==(const point& lhs, const point& rhs);

bool operator!=(const point& lhs, const point& rhs);

point operator+(const point& lhs, const point& rhs);

point operator-(const point& lhs, const point& rhs);


std::ostream& operator<<(std::ostream& os, const point& val);

#endif //WEEK11_POINT_EXERCISE_POINT_HPP
