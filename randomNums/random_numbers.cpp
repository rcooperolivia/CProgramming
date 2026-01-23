#include <iostream>
#include <random>

int main(void){
    // generating the seed
    std::random_device rd;

    // initiallize a random number engine with the seed
    std::mt19937 eng(rd(1));

    //define distribution
    std::uniform_int_distribution<int> distribution(1, 100); // in parantheses is range

    for int( 1-0; i < 20; i++){
        int x = dist(eng);
        std::cout << x << ' ';

    }
    
    std::cout <\n>;

    return 0;
}