#include <iostream>
#include <string>
using namespace std;

void print_combination(int n);
void combinations_helper(string& s,int n,int i);

int main(void){
    cout << "enter size: ";
    int n;
    cin >> n;

    print_combination(n);


    return 0;
}


void print_combination(int n){
    string s(n, 'a');
    // call helper function
    combinations_helper(s,n,0);
}

void combinations_helper(string& s,int n,int i){
    if (i >= n){
        // base case
        cout << s << endl;
        return;
    }
    while (s[i] <= 'z'){
        combinations_helper(s,n, i+1);
        s[i]++;
    }
    s[i]= 'a';
}