#include <iostream>
using namespace std;

template <typename T>
class Quiz5 {
public:
    Quiz5(const T& msg) {
        this->msg = new T();
        *(this->msg) = msg;
    }
    void printMsg() {
        std::cout << *msg;
    }
    ~Quiz5() {
        delete msg;
    }
private:
    T* msg;
};

int main(void) {
    Quiz5<std::string>* p = new Quiz5<std::string>("Templates (Chapter-12), Operator Overloading (Chapter-14), Inheritance and Polymorphism (Chapter-15)");
    p->printMsg();
    delete p;

    return 0;
}