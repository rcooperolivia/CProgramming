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
    cout << "v size: " << v.size() << endl;

    // first and last elements 
    cout << "v2 first: " << v2.front() << endl;
    cout << "v2 last: " << v2.back() << endl;

    // add to end of vector
    v2.push_back(10);
    print(v2);

    // remove the last element
    v3.pop_back();

    // iterators - objects that point 2 certain locations in the vector
    // begin() points to the first element in a vector
    // end() points to the one past the last element
    cout << *v2.begin() << endl;

    // insert (location {iterator}, value)
    v2.insert(v2.begin()+1, 1000);
    print(v2);

    // insert 500 between 5 and 6
    v2.insert(v2.end()-2, 500);
    print(v2);





    return 0;
}

void print(vector<int> v){
    for (int i=0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << "\n";
}