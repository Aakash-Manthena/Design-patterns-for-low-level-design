#pragma once
#include "vehicle.h"
#include "../drive_strategy/normal_drive.h"

class PassengerCar : public Vehicle {
public:
    PassengerCar() : Vehicle(new NormalDriveStrategy()) {}
};