#include <iostream>
#include <string>
#include "Student.hpp"

int main(void){
    cout << "Total students: " << Student::getTotalStudents() << endl;
    Student s1("Mark", 3.4);
    Student s2("Anna", 3.0);
    cout << "Total students: " << Student::getTotalStudents() << endl;

    s1.print();
    s2.print();


    return 0;
}
