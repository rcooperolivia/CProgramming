#include "CarDealer.hpp"
using namespace std;

    void CarDealer::addCar(const Car& car){
        inventory.push_back(car);
    }
    void CarDealer::showInventory() const{
        cout << "Showing inventory..." << endl;
        for (int i = 0; inventory.size():i++){
            inventory[i].print_info();
        }
    }