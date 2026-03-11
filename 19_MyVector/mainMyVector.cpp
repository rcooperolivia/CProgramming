#include "MyVector.hpp"

int main(void) {
    // Create MyVector object dynamically
    MyVector* mv = new MyVector(15);

    for (int i = 0; i < 25; i++) {
        mv->push_back(i * i);
    }

    mv->print();
    
    delete mv;

    return 0;
}