#include <iostream>
#include "models/passenger_car.h"
#include "models/off_roading_car.h"

using namespace std;

int main() {
    cout << "Hello!, this is a sample piece of code for strategy design pattern" << endl;

    PassengerCar* passengerCar = new PassengerCar();
    passengerCar->drive(); // Output: Driving normally.

    OffRoadingCar* offRoadingCar = new OffRoadingCar();
    offRoadingCar->drive(); // Output: Driving fast and furiously.

    return 0;
}