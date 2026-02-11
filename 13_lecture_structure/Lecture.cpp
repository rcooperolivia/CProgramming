#include <iostream>
#include <string>
using namespace std;

//create a description of a lecture structure
//name structs with a capital
typedef struct{
    string title;
    int duration;
} Lecture; 

// create a function which takes lecture structure as input
void printLecture(const Lecture& lecture){
    cout << "Title:\t\t" << lecture.title << endl;
    cout << "Duration:\t" << lecture.duration << endl;
}

int main(void){
    // create an object of Lecture structure
    Lecture oop_lecture;

    //access the properties (attributes, data members) of Lecture object
    oop_lecture.title = "Classes and Objects";
    oop_lecture.duration = 60*50;

    printLecture(oop_lecture);

    return 0;
}