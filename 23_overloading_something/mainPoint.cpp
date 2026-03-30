#include "Point.hpp"
using namespace std;
#include <iostream>

int main(void){
    Point p1(3,4);
    Point p2(5,4);
    Point p3(81,82);

    //compare 2 points
    if (p1.operator!=(p2)){
        cout<< (char) p3[1];// <<endl;
    }
    else{
        cout << (char) p3[0];// << endl;
    }

    p1[0] = 70 -17;
    cout << (char) p1[0];

    cout<< "MQ9\n";

    return 0;
}