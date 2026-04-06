#ifndef POINT_HPP
#define POINT_HPP

#include <string>

class Point {
public:
    Point(int x = 0, int y = 0);
    
    // Relational operators
    bool operator==(const Point& other);
    bool operator!=(const Point& other);

    // Operator []
    int& operator[](int index);

    // Arithmetic operators
    Point operator+(const Point& other) const;
    Point operator*(const Point& other) const; // TODO (can you use + ?)
    Point operator-(const Point& other) const; // TODO

    // Arithmetic assignment operators
    Point& operator+=(const Point& other);
    Point& operator*=(const Point& other); // TODO
    Point& operator-=(const Point& other); // TODO

    // Preincrement operator
    Point operator++();
    
    //Postincrement
    Point operator++(int);

    std::string toString() const;


private:
    int x, y;
};

#endif
