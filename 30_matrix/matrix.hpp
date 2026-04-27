#ifndef MATRIX_HPP
#define MATRIX_HPP

#include <iostream>
using namespace std;

template <typename T>
class Matrix{
    public:
    Matrix(int r =1, int c = 1);

    ~Matrix();

    Matrix(const Matrix<T>& other);

    Matrix<T>& operator==(const Matrix<T>& other);

    Matrix<T> operator+(const Matrix<T>& other);


    void print() const;

    //lets do a static method :)
    static Matrix<T> load(const char* filename);

    private:
    int rows, cols;
    T** data;

    protected:
    //
};

#include "Matrix.tpp"



#endif