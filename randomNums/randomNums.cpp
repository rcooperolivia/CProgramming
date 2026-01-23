#include <iostream>
#include <ctime> // time function
#include <cstdlib> // for rand and srand functions

int main(void){
    // 1.  generate two random single digit integers
    srand(time(0)); // set a seed
    int number1 = rand() % 10;
    int number2 = rand() % 10;
    
    //check number1 < number 2, and print appropriate message
    std::cout << ((number1 < number2)? "num1 is smaller\n" : "num2 is smaller or equal\n");



}