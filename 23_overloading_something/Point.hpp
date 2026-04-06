#ifndef POINT_HPP
#define POINT_HPP

#include <string>

class Point {
public:
    Point(int x = 0, int y = 0, const char* new_tag = nullptr);
    Point(const Point& other);
    
    // Relational operators
    bool operator==(const Point& other);
    bool operator!=(const Point& other);

    //destructor
    ~Point();

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

    //assignmemt operator
    Point& operator=(const Point& other);

    //friend method (allows access to any private points inside the class)
    //kids no less than friends (and can be very restricted)
    friend std::istream operator>>(std::istream& in, Point& p);


private:
    int x, y;
    char* tag;
};

std::ostream operator<<(std::ostream& out, const Point& p);



#endif
