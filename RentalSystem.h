#ifndef RENTALSYSTEM_H
#define RENTALSYSTEM_H

#include <vector>
#include "Car.h"
#include "Motorbike.h"

class RentalSystem {
private:
    vector<Vehicle*> vehicles;

public:

    void addCar() {

        string id, brand;
        double price;
        int seats;

        cout << "Car ID: ";
        cin >> id;

        cout << "Brand: ";
        cin >> brand;

        cout << "Price: ";
        cin >> price;

        cout << "Seats: ";
        cin >> seats;

        vehicles.push_back(
            new Car(id, brand, price, seats)
        );
    }

    void addMotorbike() {

        string id, brand;
        double price;
        int cc;

        cout << "Bike ID: ";
        cin >> id;

        cout << "Brand: ";
        cin >> brand;

        cout << "Price: ";
        cin >> price;

        cout << "CC: ";
        cin >> cc;

        vehicles.push_back(
            new Motorbike(id, brand, price, cc)
        );
    }

    void showVehicles() {

        for(int i = 0; i < vehicles.size(); i++) {
            vehicles[i]->displayInfo();
            cout << endl;
        }
    }

    void rentVehicle() {

        string id;

        cout << "Enter ID: ";
        cin >> id;

        for(int i = 0; i < vehicles.size(); i++) {

            if(vehicles[i]->getId() == id) {

                if(!vehicles[i]->isRented()) {

                    vehicles[i]->rentVehicle();
                    cout << "Vehicle rented.\n";
                }
                else {
                    cout << "Already rented.\n";
                }
            }
        }
    }

    void returnVehicle() {

        string id;

        cout << "Enter ID: ";
        cin >> id;

        for(int i = 0; i < vehicles.size(); i++) {

            if(vehicles[i]->getId() == id) {

                vehicles[i]->returnVehicle();
                cout << "Vehicle returned.\n";
            }
        }
    }
};
#endif