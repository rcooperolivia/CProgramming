#ifndef MYVECTOR_HPP
#define MYVECTOR_HPP

class MyVector{
    public:
    //constructor
    MyVector(int capacity = 10);

    //destructor
    ~MyVector();

    
    //copy constructor
    MyVector(const MyVector& other);

    //print method
    void print() const;

    //pushback
    void push_back(int val);

    private:
    int * elements; // dynamic array
    int size; //current number of elements
    int capacity; // maximum number of elements in an array
};


#endif