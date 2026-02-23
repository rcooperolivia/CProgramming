#include <iostream>
#include <string>
using namespace std;

//to do:
// implement get method
// create constructor with arguments
// add mileage property
// add fuel capacity
// add fuel lever

// void refuel(double gallons);
// void drive (double distance);

#ifndef CAR_HPP
#define CAR_HPP

class Car{
    public:
    // no-arg constructor
    Car();
    //set methods
    void setMake(const string& new_make);
    void setModel(const string& new_model);
    void setYear(int new_year);
    void setMPG(double new_mpg);

    //get methods (these are normally constant)
    string getMake() const;
    string getModel() const;
    int getYear() const;
    double getMPG() const;

    // Class methods
    void print_info() const;

    struct Car(const string& make, const string& model, int year, double mpg);
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

    void Car::print_info(){
        cout << make << endl;
        cout << model << endl;
        cout << year << endl;
        cout << mpg << endl;
    }
    

    private:
        string make;
        string model;
        int year;
        double mpg;
};

#endif
