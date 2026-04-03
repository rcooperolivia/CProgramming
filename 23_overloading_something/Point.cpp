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

//bracket operator
int& Point::operator[](int index){
    return (index == 0) ? x : y;
}

// //aritmetic operator
// Point Point::operator+(const Point& other) const{
//     return Point (x + other.x, y + other.y);
// }


//Arithmatic assignmemt operator
Point& operator+=(const Point& other){
    // //option 1
    // x += other.x;
    // y += other.y;

    // return *this;

    // //option 2
    
    // //copy of current object
    // Point tmp(x,y);
    // Point tmp2(*this);

    // return tmp;
    // return tmp2;

    //option 3 
    *this = *this + other;
    return *this;
}

//to string
std::string Point::toString() const{
    return "(" + std::to_string(x) + std::to_string(y) + ")";
}