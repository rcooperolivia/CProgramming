#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

class MyException : public std::logic_error {
    public:
    MyException(int code, const std::string& msg) : std::logic_error(msg), err_code(code){
    }

    private:
    int err_code;

    protected:
    //
};

template <typename T>
class Fraction{
    public:
    Fraction(int n = 1, int d = 1) : num(n), den(d){
        //
    }

    int quotient() const {
        if (den == 0){
            throw std::runtime_error("Denominator can not be 0");
        }
        // else if (num > 99) {
        //     throw 1; // what if i don't like big numbers
        // }
        else if ((0 > num && den > 0;) || (0 > den && num > 0;)){
            throw std::logic_error("Don't do that");
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
    catch (const std::logic_error& ex){
        cout << "Logic error was caught: " << what << endl; //what return message in constructor
    }
    //second catch...
    catch (const std::runtime_error& ex){
        cout << "Runtime error was caught with the code: " << what << endl;
    }
    //lmao whatevs
    // catch (...){

    // }


    cout << "End of program" << endl;

    return 0;
}