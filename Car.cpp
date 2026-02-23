// car class implementation file
#include <iostream>
#include <string>
#include "Car.hpp"


void Car::setMake(const string& new_make){
    if (!new_make.empty()){
        make = new_make;
    }
}
void Car::setModel(const string& new_model){
    if (!new_model.empty()){
        model = new_model;
    }
}
void Car::setYear(int new_year){
    if (new_year < 1900){
        year = 1900;
    }
    else if (!new_year > 2026){
        year = 2026;
    }
    else {
        year = new_year;
    }
}
void Car::setMPG(double new_mpg){
    mpg = (new_mpg >= 0) ? new_mpg : 0;
}

Car::Car(){//everywhere i go... they haunt me
    setMake("...");
    setModel("...");
    setYear(1900);
    setMPG(0);
}

    void Car::print_info() const{
        cout << make << endl;
        cout << model << endl;
        cout << year << endl;
        cout << mpg << endl;
    }

 string Car::getMake() const{
    return make;
 }
    string Car::getModel() const{
        return model;
    }
    int Car::getYear() const{
        return year;
    }
    double Car::getMPG() const{
        return mpg;
    }

    
    Car::Car(const string& make, const string& model, int year, double mpg){
        setMake("...");
        setModel("...");
        setYear(1900);
        setMPG(0);

    }