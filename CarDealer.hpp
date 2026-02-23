#include <vector>
#include "Car.hpp"
using namespace std;

#ifndef CARDEEALER_HPP
#define CARDEALER_HPP

class CarDealer {
    public:
    void addCar(const Car& car); // add car to inventory
    void showInventory() const; // print all cars
    private:
    vector<Car> inventory;
};

#endif