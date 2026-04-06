#include "Point.hpp"

Point::Point(int x, int y) : x(x), y(y) {

}

bool Point::operator==(const Point& other) {
    return (x == other.x && y == other.y);
}

bool Point::operator!=(const Point& other) {
    return !(*this == other);
}

int& Point::operator[](int index) {
    return (index == 0) ? x : y;
}


std::string Point::toString() const {
    return "(" + std::to_string(x) + ", " + std::to_string(y) + ")";
}

Point Point::operator+(const Point& other) const {
    return Point(x + other.x, y + other.y);
}

Point& Point::operator+=(const Point& other) {
    // // Option 1
    // x += other.x;
    // y += other.y;


    // return *this;
    // // Option 2 Copy of the current object
    // Point tmp(x, y);
    // Point tmp2(*this);

    // return tmp;
    // return tmp2;

    // Option 3.
    *this = *this + other;
    return *this;

}

Point Point::operator++() {
    x++;
    y++;
    return *this;
}

Point Point::operator++(int) {
    return Point(x++, y++);
}

Point Point::operator*(const Point& other) const{
    for (i= 0; i< other.y; i++){
        y= y + y;
    } 
    for (i= 0; i< other.x; i++){
        x= x + x;
    } 
    return *this;
} // TODO (can you use + ?)

Point Point::operator-(const Point& other) const{
    return Point(x - other.x, y - other.y);
} // TODO

Point& Point::operator*=(const Point& other){
    *this = *this * other;
    return *this;
} // TODO

Point& Point::operator-=(const Point& other){
    *this = *this - other;
    return *this;
} // TODO