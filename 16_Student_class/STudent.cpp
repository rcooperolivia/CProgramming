#include <iostream>
#include <string>
#include "Student.hpp"
using namespace std;


//intialize static data member (REQUIRED)
int Student::total_students = 0;
int Student::next_id = 1000;

void Student::print() const{
    cout << '\n';
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "GPA: " << gpa << endl;
    cout << '\n';
}

Student::Student(const string& n, double g): name(n),gpa(g){
        total_students++;
        id = "U0000" + to_string(next_id);
        next_id += 5;
    }

int Student::getTotalStudents(){
    return total_students;
}

    static void setGraduationRequirement(double newGPA){
        .
    }

