#include <iostream>
#include <string>
using namespace std;

//template class
template <typename T1 = int, typename T2 = double> // default template parameters
class Pair{
    public:
    //create a constructor
    Pair(const T1& f, const T2& s) : first(f), second(s){

    }

    //getters
    const T1& getFirst() const{
        return first;
    }

    const T2& getSecond() const{
        return second;
    }

    //setters
    void setFirst(const T1& first){
        this->first = first;
    }
    void setSecond(const T2& second){
        this->second = second;
    }

    //print method
    void print() const{
        cout << "(" << getFirst() << ", " << getSecond() << ")" << endl;
    }

    private:
    T1 first;
    T2 second;
};

// create a function that takes two args of any type
//returns a pair of those arguments
template <typename T1, typename T2>
Pair<T1,T2> createPair(const T1& v1, const T2& v2){
    return Pair<T1,T2>(v1,v2); // cannot return a refrence
    //bc you create these values inside the function
}

int main(void){
    // Create a pair object
    Pair<int, double> p1(1, 1.3);


   Pair<std::string, char> p2(std::string("hello"), '!');

   auto p3 = createPair('a',1);

   Pair p4(12, 12.4);
  

    p1.print();
    p2.print();
    p3.print();
    p4.print();

    return 0;
}