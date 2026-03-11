#include "MyVector.hpp"
#include <iostream>

int main(void) {
    // Create MyVector object dynamically
    MyVector* mv = new MyVector(15);

    for (int i = 0; i < 20; i++) {
        mv->push_back(i * i);
        mv->print();
        std::cout << mv->getCapacity() << std::endl;
    }

    mv->print();

    
    mv->at(0) == 111;
    std::cout << "first element: " << mv->at(0) << std::endl;

    while (!mv->empty()){
        mv->pop_back();
        mv->print();
    }

    
    delete mv;

    return 0;
}