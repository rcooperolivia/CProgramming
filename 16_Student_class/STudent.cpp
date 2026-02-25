#include <iostream>
#include <string>
using namespace std;



class Student {
    private: 

    public:
    string name;
    double gpa;

    static int total_students;
    Student(const string& n, double g): name(n),gpa(g){
        total_students++;
    }
};

//intialize static data member (REQUIRED)
int Student::total_students = 0;

int main(void){
    cout << "Total students: " << Student::total_students << endl;
    Student("Mark", 3.4);
    Student("Anna", 3.0);
    cout << "Total students: " << Student::total_students << endl;


    return 0;
}
