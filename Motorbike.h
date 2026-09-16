#ifndef MOTORBIKE_H
#define MOTORBIKE_H

#include "Vechicle.h"

class Motorbike : public Vehicle {
private:
    int cc;

public:
    Motorbike(string id = "",
              string brand = "",
              double price = 0,
              int cc = 0)
        : Vehicle(id, brand, price)
    {
        this->cc = cc;
    }

    string getType() override {
        return "Motorbike";
    }

    void displayInfo() override {
        cout << "\n===== MOTORBIKE =====";
        Vehicle::displayInfo();
        cout << "\nEngine: " << cc << "cc" << endl;
    }
};

#endif