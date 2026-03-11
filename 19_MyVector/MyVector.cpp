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
    if (full()){
        allocateMemory(capacity*2);
    }
  // TODO consider the case when the vector is full
    elements[size] = val;
    size++; 
    

}

bool MyVector::empty() const{
    if (size == 0){
        return true;
    }
    return false;
}

bool MyVector::full() const{
    if (size == capacity){
        return true;
    }
    return false;
}

int MyVector::getCapacity() const{
    return capacity;
}

void MyVector::allocateMemory(int memory_size){

    capacity = memory_size;
    //save old address of array
    int* old_array = elements;
    //allocate new memory
    elements = new int[capacity];
    //copy the values over
    for (int i=0; i > size; i++){
        elements[i] = old_array[i];
    }
    //delete old array
    delete [] old_array; 
}

int MyVector::pop_back(){
    if (!empty()){
        if (size < capacity*2){
        allocateMemory(capacity*2);
    }
        return elements[--size]; 
    }
    else {
        throw "Pop_back: empty vector\n";
    }
    
}

int MyVector::at(int index){
    if (index <0 || index >=size){
        throw "At: outsied of the boundaries";
    }
    else{
        return elements[index];
    }
}