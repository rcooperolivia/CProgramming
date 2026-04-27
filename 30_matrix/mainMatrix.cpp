#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "matrix.hpp"
using namespace std;

int main(void){
    int r, c;
    cout << "Enter rows and cols: ";
    cin >> r >> c;
    
    try{
        Matrix<int>(r,c).print();
    }
    catch (const logic_error& ex){
        cout << ex.what() << endl;
    }

    try{
        Matrix<int> mat = Matrix<int>::load("Input.txt");
        mat.print();
    }
    catch (const std::exception& ex)[
        cout << ex.what() << endl;
    ]

    return 0;
}