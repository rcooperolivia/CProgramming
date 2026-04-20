#include <iostream>
using namespace std;

class Dad{
    public:
    Dad(){
        cout << "Dad's constructor" << endl;
    }

    virtual ~Dad(){
        cout << "Dad's destructor" << endl;
        }

    private:
    //

    protected:
    //
};

class Son : public Dad {
    public:
    Son(){
        cout << "Son's constructor" << endl;
        data = new int[100];
        cout << "Memory was allocated" << endl;
    }

    int* data;

    ~Son(){
        cout << "Son's destructor" << endl;
        delete [] data;
        cout << "Memory was deallocated" << endl;
    }

    private:
    //

    protected:
    //
};

int main(void){
    Dad* dad = new Son;

    delete dad;

    return 0;
}