#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <string>
using namespace std;


class Student {
    private: 
    string name;
    double gpa;
    static int total_students;
    static int next_id; //generate unique student id
    string id;

    public:
    
    Student(const string& n, double g);

    //get function
    static int getTotalStudents();

    //set method
    static void setGraduationRequirement(double newGPA);

    void print() const;

};


#endif