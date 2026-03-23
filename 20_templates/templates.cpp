#include <iostream>
#include <vector>
#include <string>

//template function prototype
template <typename T>
T smallest(const T& n1, const T& n2, const T& n3);

template <typename T>
void print(const T& value);
void print(const bool& value);

template <typename T>
T findMax(const std::vector<T>& v);

int main(void){
    int i1=1, i2=4, i3=7;
    //call template function
    std::cout << smallest(i1,i2,i3) << std::endl;

    std::string s1 = "apple", s2 = "Banana", s3 = "peanut";
    std::cout << smallest(s1,s2,s3) << std::endl;
    return 0;
}

template <typename T>
T smallest(const T& n1, const T& n2, const T& n3){
    if (n1 <= n2 && n1 <= n3){
        return n1;
    }
    else if(n2 <= n3){
        return n2;
    }
    else{
        return n3;
    }
}


template <typename T>
void print(const T& value){
    std::cout << "Generic: " << value << std::endl;
}
void print(const bool& value){
    if (value){
        std::cout << "True" << std::endl;
    }
    else{
        std::cout << "True" << std::endl;
    }
    
}

template <typename T>
T findMax(const std::vector<T>& v){
    if (v.empty){
        // throw an exception
        throw std::string("FindMax: Empty Vector");
    }
    T hold = v(0);
    for (int i =1; i < v.size; i++){
        if (v[i]>hold){
            hold = v[i];
        }
    }
    return hold;
}
// TODO: test find max w/ different vectors :)