
#include "Car.hpp"
#include "CarDealer.hpp"

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

    Car ferrari_spider("Ferrari", "Spider", 2021, 13.5);
    
    Car ferrari_siper("Ferrari", "Super", 2019, 10.5);
    

    ferrari.print_info();
    Chevy.print_info();

    //car dealer obj
    CarDealer lakeland_ferrari;

    //add cars
    lakeland_ferrari.addCar(ferrari);
        lakeland_ferrari.addCar(ferrari_siper);
            lakeland_ferrari.addCar(ferrari_spider);

    // print inventory
    lakeland_ferrari.showInventory();

    return 0;
}