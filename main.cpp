#include "RentalSystem.h"

int main() {

    RentalSystem rental;

    int choice;

    do {

        cout << "\n====== VEHICLE RENTAL SYSTEM ======";
        cout << "\n1. Add Car";
        cout << "\n2. Add Motorbike";
        cout << "\n3. Show Vehicles";
        cout << "\n4. Rent Vehicle";
        cout << "\n5. Return Vehicle";
        cout << "\n6. Exit";

        cout << "\nChoose: ";
        cin >> choice;

        switch(choice) {

        case 1:
            rental.addCar();
            break;

        case 2:
            rental.addMotorbike();
            break;

        case 3:
            rental.showVehicles();
            break;

        case 4:
            rental.rentVehicle();
            break;

        case 5:
            rental.returnVehicle();
            break;

        }

    } while(choice != 6);

    return 0;
}