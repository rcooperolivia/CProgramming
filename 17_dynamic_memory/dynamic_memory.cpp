#include <iostream>
using namespace std;

void printArr(int* arr, int size);
int* doubleARR(int* arr, int size);
int* doubleARRnew(const int* arr, int size);

int main(void) {
    const int SIZE = 5;
    int arr[SIZE] = {1, 2, 3, 4, 5};

    printArr(arr, SIZE);

    int* doubled_array =doubleARR(arr, SIZE);
    printArr(arr, SIZE);

    int* doubled_arrayNew =doubleARRnew(arr, SIZE);
    printArr(doubled_arrayNew, SIZE);

    for (int i = 0; i < 999999; i++){
        double* d =new double[999999];
    }

    return 0;
}

void printArr(int* arr, int size) {
    for(int i = 0; i < size; i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}
int* doubleARR(int* arr, int size){
    for(int i = 0; i < size; i++) {
        arr[i] *= 2;
    }
    return arr;
}

int* doubleARRnew(const int* arr, int size){
    //int new_arr[size]; // local array (doesn't work)

    //create an array dynamically (puts into heap)
    int* new_arr = new int[size];
    // believe it or not heap is not infinite
    // remember to reallocate when you dont need that memory anymore
    // use keyword delete (delete var; delete [for array]p;)


    
    for(int i = 0; i < size; i++) {
        new_arr[i] = arr[i] * 2;
    }
    return new_arr;
}