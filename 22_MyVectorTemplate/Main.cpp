//TODO

//create a vector of int
//insert 10 values (using pushback)
// print the vectors

#include "MyVector.hpp"
#include <iostream>
using namespace std;

int main(void){
    //create a vector of int
    MyVector<int> v;

    //insert 10 values (using pushback)
    for (i=0; i< 10; i++){
        v.push_back(i);
    }
    //print the vectors
    v.print();

    return 0;
}