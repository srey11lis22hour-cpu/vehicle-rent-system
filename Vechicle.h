#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
using namespace std;

class Vehicle {
private:
    string id;
    string brand;
    double price;
    bool rented;

public:
    Vehicle(string id = "",
            string brand = "",
            double price = 0)
    {
        this->id = id;
        this->brand = brand;
        this->price = price;
        rented = false;
    }

    virtual ~Vehicle() {}

    string getId() {
        return id;
    }

    string getBrand() {
        return brand;
    }

    double getPrice() {
        return price;
    }

    bool isRented() {
        return rented;
    }

    void rentVehicle() {
        rented = true;
    }

    void returnVehicle() {
        rented = false;
    }

    virtual string getType() = 0;

    virtual void displayInfo() {
        cout << "\nID: " << id;
        cout << "\nBrand: " << brand;
        cout << "\nPrice per day: $" << price;

        if(rented)
            cout << "\nStatus: Rented";
        else
            cout << "\nStatus: Available";
    }
};

#endif