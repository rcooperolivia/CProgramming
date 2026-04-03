#ifndef POINT_HPP
#define POINT_HPP
#include <string>

class Point{
    public:
    Point(int x = 0, int y = 0);

    //relational operators
    bool operator==(const Point& other);
    bool operator!=(const Point& other);

    //operator bracket
    int& operator[](int index);

    // //aritmetic operator
    // Point operator+(const Point& other) const;

    //Arithmatic assignmemt operator
    Point& operator+=(const Point& other) const;

    //to string
    std::string toString() const;

    private:
    int x, y;
};




#endif