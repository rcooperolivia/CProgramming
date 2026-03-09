
//implementation file
#include"MyVector.hpp"
#include<iostream>
using namespace std;
//constructor 
MyVector::MyVector(int capacity){
    size = 0;
    this->capacity = capacity;
    elements = new int[capacity];
}

//destructor
MyVector::~MyVector(){
    delete [] elements;
}

//copy constructor
MyVector::MyVector(const MyVector& other){
    size = other.size;
    capacity = other.capacity;
    elements = new int[capacity];
    for (int i=0; i<size;i++){
        elements[i] = other.elements[i];
    }
}


    //print method
    void MyVector::print() const{
        cout << "[ ";
        for (int i=0; i<size;i++){
            cout<< elements[i];
        }
        cout << " ]";
    }
    
    //pushback
    void MyVector::push_back(int val){
        //consider case when vector is full
        elements[size] = val;
        size++;
    }