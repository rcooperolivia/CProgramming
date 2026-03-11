#ifndef MYVECTOR_HPP
#define MYVECTOR_HPP

class MyVector {
public:
    MyVector(int capacity = 10);
    MyVector(const MyVector& other);

    // Destructor
    ~MyVector();

    //empty
    bool empty() const;

    void print() const;
    void push_back(int val);    // Add the new element at the end
    int pop_back();

    int getCapacity() const;
    int at(int index);

private:
    int* elements;      // An array of integers
    int size;           // The current number of elements
    int capacity;       // The max number of elements in the array
    //method
    bool full() const;
    void allocateMemory(int memory_size);
};

#endif