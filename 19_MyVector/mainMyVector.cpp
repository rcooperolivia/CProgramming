#include "MyVector.cpp"
#include "MyVector.hpp"
#include <iostream>
int main(void){
    //Create MyVector object dynamically
    MyVector* mv = new MyVector(15);
    
    for (int i = 1; i < 10; i++){
        mv->push_back(i*i);
    }

    mv->print();

    delete mv;


    return 0;
}