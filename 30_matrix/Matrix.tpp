#include "matrix.hpp"
#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;

template <typename T>
Matrix<T>::Matrix(int r = 1, int c = 1) : rows(r), cols(c) {
    if (rows < 1 || cols < 1){
        rows = cols = 0;
        data = nullptr;
        throw logic_error("Rows and columns should be positive\n");
    }

    //allocate an array of T pointers
    data = new T*[rows];

    for (int i = 0; i < rows; i++){
        data[i] = new T[cols];
    }

    //initialize the matrix
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            data[i][j] = T(); // T() = default template value
        }
    }
}


template <typename T>
void Matrix<T>::print() const{
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            cout << left << setw(6) << data[i][j];
        }
    }
}

template <typename T>
Matrix<T> Matrix<T>::load(const char* filename){
    ifstream in(filename);
    if (!in){
        throw cout<< invalid_argument(std::string("Cannot open the file")+ filename);
    }

    int r, c;
    in >> r >> c;
    Matrix m(r,c);

    //scan the data
    for (int i = 0; i < m.rows; i++){
        for (int j = 0; j < m.cols; j++){
            in >> m.data[i][j];
        }
    }

    in.close(); //close ifstream object
    return m;
}