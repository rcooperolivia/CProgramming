#include <iostream>
#include <string>
using namespace std;

class Human{
    public:
    string name;
    int age;

    Human(){
        cout << "Human constructor " << this << endl;
    }
    Human(const string& n, int a) : name(n), age(a) {
        cout << "Human constructor " << this << endl;
    }
    ~Human(){
        cout << "Human destructor " << this << endl;
    }

    void printInfo() const{
        cout << "My name is " << name << ". I am " << age << " years old." << endl;
    }

    private:
    //
};

class Student : public Human{ // inherits public and non constructors
    public:
    //string name;
    //int age;
    double gpa;

    Student(){
        cout << "Student constructor " << this << endl;
    }
    // Student(const string& n, int a, double g){
    //     name = n;
    //      age = a;
    //      gpa = g;
    // }
    Student(const string& n, int a, double g) : Human(n,a) {
         gpa = g;
    }
    ~Student(){
        cout << "Student destructor " << this << endl;
    }

    // redefine base class method
    void printInfo() const{
        //call parent method
        Human::printInfo();

        cout<< "I am a student and my GPA is " << gpa << "." << endl;
    }

    private:
    //
};

int main(void){
    Human person;
    person.name = "John";
    person.age = 25;
    person.printInfo();

    Student stu("Stu", 20, 3.4); // hashtag love informing my prof that this is an actual name ppl have
    //stu.name = "Stu";
    //stu.age = 20;
    //stu.gpa = 3.4;
    stu.printInfo();

    return 0;
}