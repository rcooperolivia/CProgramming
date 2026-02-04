#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> v);

int main(void){
    // create a vector
    vector<int> v; // empty vector of integers
    // create and intialize the vector
    vector<int> v2{1, 2, 3, 4, 5, 6};
    print(v2);

    // provide size and default value
    vector<int> v3(5,9); // vector of 5 elements each set to 9
    print(v3);

    //copy from another vector
    vector<int> v4(v2);
    print(v4);

    // get number of elements 
    cout << "v2 size: " << v2.size() << endl;
    cout << "v3 size: " << v.size() << endl;


    return 0;
}

void print(vector<int> v){
    for (int i=0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << "\n";
}