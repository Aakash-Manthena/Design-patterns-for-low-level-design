#pragma once

#include "../drive_strategy/drive_strategy.h"

class Vehicle {
public:
    DriveStrategy* driveStrategy;
    Vehicle (DriveStrategy* strategy) : driveStrategy(strategy) {}
    void drive() {
        driveStrategy->drive();
    }
};