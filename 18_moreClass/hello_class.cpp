#include <iostream>
using namespace std;

class Hello{
    public:
    // no arg constructor
    Hello(){
        cout << "No arg constructor for " << this << endl;
    }

    void bye() const {
        cout << "Bye!!!\n";
    }

    private:
    //.
};

int main(void){
    // Create hello object dynamically
    Hello* hi = new Hello;

    // call bye method
    hi->bye();

    // reallocate memory
    delete hi;
    
    return 0;
}