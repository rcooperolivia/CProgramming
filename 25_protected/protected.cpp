#include <iostream>
#include <string>
using namespace std;

class A{
    public:
    string msg1="Message one!";

    private:
    string msg2="Message two!";

    protected:
    string msg3="Message three!";
};

class B : public A {// if ya wanna prevent further inheritance, make it private
    public:
    void method() const{
        cout << msg1 << endl;// public is ok
        // cout << msg2 << endl; // private no access
        cout << msg3 << endl; // protected ok
    }

    private:
    //
};

int main(void){
    B b;
    b.method();

    return 0;
}