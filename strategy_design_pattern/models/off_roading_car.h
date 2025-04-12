#pragma once
#include "./vehicle.h"
#include "../drive_strategy/special_drive.h"

class OffRoadingCar : public Vehicle {
    public:
        OffRoadingCar() : Vehicle(new SpecialDriveStrategy()) {}
};