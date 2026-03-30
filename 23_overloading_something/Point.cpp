#include "Point.hpp"
using namespace std;
#include <iostream>

Point::Point(int x, int y): x(x), y(y){
    //
}

//relational operators
bool Point::operator==(const Point& other){
    return (x == other.x && y == other.y);
}
bool Point::operator!=(const Point& other){
    return !(*this == other);
}

int& Point::operator[](int index){
    return (index == 0) ? x : y;
}