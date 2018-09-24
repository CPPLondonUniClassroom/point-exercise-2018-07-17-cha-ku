

#ifndef WEEK11_POINT_EXERCISE_POINT_HPP
#define WEEK11_POINT_EXERCISE_POINT_HPP

struct point {
    int x = 0;
    int y = 0;
};

bool operator==(const point& lhs, const point& rhs);

bool operator!=(const point& lhs, const point& rhs);

point operator+(const point& lhs, const point& rhs);

point operator-(const point& lhs, const point& rhs);

point operator+=(const point& val);

point operator-=(const point& val);

std::ostream& operator<<(const point& val);

#endif //WEEK11_POINT_EXERCISE_POINT_HPP
