#include <iostream>
using namespace std;

template <typename T>
class Fraction{
    public:
    Fraction(int n = 1, int d = 1) : num(n), den(d){
        //
    }

    int quotient() const {
        if (den == 0){
            throw "Denominator can not be 0";
        }
        else if (num > 99) {
            throw 1; // what if i don't like big numbers
        }

        return num / den;
    }

    private:
    int num, den;

    protected:
    //
};

int main(void){
    int n1, n2;
    cout << "Enter two integers: ";
    cin >> n1 >> n2;

    Fraction f1(n1,n2);
    
    //try block
    try {
        cout << f1.quotient() << endl;
        cout << "End of try block" << endl;
    }
    //catch block
    catch (const char* ex){
        cout << "Char* exception was caught: " << ex << endl;
    }
    //second catch...
    catch (int ex){
        cout << "Int exception was caught with the code: " << ex << endl;
    }
    //lmao whatevs
    // catch (...){

    // }


    cout << "End of program" << endl;

    return 0;
}