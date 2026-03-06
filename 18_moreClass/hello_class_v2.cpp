#include <iostream>
#include <string>
using namespace std;


class Hello{
    public:
    // no arg constructor
    Hello() : size(0), messages(nullptr) {
        cout << "No arg constructor for " << this << endl;
    }

    // new constructor!! w/ args
    Hello(int n) : size(n){
        cout << "Argument constructor for " << this << endl;
        messages = new string[size];
        // initialize values
        for (int i = 0; i < size; i++){
            messages[i] = (i%2) ? "Welcome" : "Not welcome";
        }
    }

    
    //DESTRUCTOR LET GO
    ~Hello(){
        //always is ~Name(void)
        cout << "Destructor for " << this << endl;
        if (messages != nullptr){
            delete [] messages;
        }
    }

    void bye() const {
        cout << "Bye!!!\n";
    }

    private:
    string* messages;
    int size;
};

int main(void){
    // Create hello object dynamically
    Hello* hi = new Hello;

    // call bye method
    hi->bye();

    // new obj with arg constructor
    Hello* hi2 = new Hello(12);


    // reallocate memory
    delete hi;
    delete hi2;

    // make for loop
    // for (int i = 0; i < 100; i++){
    //     Hello h(999999);
    //     //delete h;
    // }
    
    Hello hi3(10);
    Hello hi4 = hi3;
    
    return 0;
}