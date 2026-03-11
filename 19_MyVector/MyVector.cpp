#include "MyVector.hpp"
#include <iostream>

MyVector::MyVector(int capacity) {
    this->capacity = capacity;
    size = 0;
    elements = new int[capacity];
}

// Copy constructor
MyVector::MyVector(const MyVector& other) {
    capacity = other.capacity;
    size = other.size;
    elements = new int[capacity];
    for(int i = 0; i < size; i++) {
        elements[i] = other.elements[i];
    }
}

MyVector::~MyVector() {
    delete [] elements;
}

void MyVector::print() const {
    std::cout << "[ ";
    for (int i = 0; i < size; i++) {
        std::cout << elements[i] << ' ';
    }
    std::cout << "]\n";
}

void MyVector::push_back(int val) {
    if (size == capacity){
        std::cout << "You have reached Capacity" << std::endl;
    }
    else{    // TODO consider the case when the vector is full
        elements[size] = val;
        size++; 
    }

}