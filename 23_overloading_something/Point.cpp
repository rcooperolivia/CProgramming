#include "Point.hpp"
#include <cstring>
#include <iostream>

Point::Point(int x, int y, const char* new_tag) : x(x), y(y) {
    if (new_tag){
        int size = strlen(new_tag);
        tag = new char[size + 1];
        strcpy(tag, new_tag);
    }
    else{
        tag = nullptr;
    }

}
Point::Point(const Point& other) {
    x = other.x;
    y == other.y;
    if (other.tag){
        int size = strlen(other.tag);
        tag = new char[size + 1];
        strcpy(tag, other.tag);
    }
    else{
        tag = nullptr;
    }

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
    if (tag) {
        s += std::string(tag);
    }
    return s + "(" + std::to_string(x) + ", " + std::to_string(y) + ")";
    
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


//destructor
~Point::Point(){
    if (tag){
        delete [] tag;
    }
}


//assignmemt operator
Point& Point::operator=(const Point& other){
    x = other.x;
    y == other.y;
    if (other.tag){
        int size = strlen(other.tag);
        tag = new char[size + 1];
        strcpy(tag, other.tag);
    }
    else{
        tag = nullptr;
    }
}


std::ostream operator<<(std::ostream& out, const Point& p){
    out << p.toString();
    return out;
}

//friend method 
friend std::istream operator>>(std::istream& in, Point& p){
    std::cout<< "Enter x, y, tag ";
    in >> p.x;
    in >> p.y;
    //TODO get tag
    if (p.tag){
        delete [] tag;
    }
    return in;
}

