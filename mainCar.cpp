
#include "Car.hpp"

int main(){
    //create an object of Car class
    Car ferrari;
    Car Chevy;
    ferrari.setMake("Ferrari");
    ferrari.setModel("F50");
    ferrari.setYear(2024);
    ferrari.setMPG(13.8);

    Chevy.setMake("Chevrolet");
    Chevy.setModel("Impala");
    Chevy.setYear(1967);
    Chevy.setMPG(8008);
    

    ferrari.print_info();
    Chevy.print_info();

    return 0;
}