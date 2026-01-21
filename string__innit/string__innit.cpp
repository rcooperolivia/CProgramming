#include <iostream>
#include <string>

int main(void) {
    // initialize the string
    std::string str1("this is first string");

    // initialize the string with another string
    std::string str2(str1);

    // initialize the string with a character and a number of occurrences
    std::string str3(100,"?");

    //initialize the string with a part of another string
    std::string str4(str1, 14, 6);
    // first is which string , then start at index, and take 6 characters

    // print str4
    std::cout << str4 << std::endl;
    // print str3
    std::cout << str3 << std::endl;

    if (str1 == str2) {
        std::cout <<  str4 + str1 << std:: endl;

    }

 
    return 0;
}