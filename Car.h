#ifndef CAR_H
#define CAR_H

#include "Vechicle.h"

class Car : public Vehicle {
private:
    int seats;

public:
    Car(string id = "",
        string brand = "",
        double price = 0,
        int seats = 0)
        : Vehicle(id, brand, price)
    {
        this->seats = seats;
    }

    string getType() override {
        return "Car";
    }

    void displayInfo() override {
        cout << "\n===== CAR =====";
        Vehicle::displayInfo();
        cout << "\nSeats: " << seats << endl;
    }
};

#endif