#pragma once
#include "drive_strategy.h"
#include <iostream>

using namespace std;

class SpecialDriveStrategy : public DriveStrategy {
public:
    void drive() override {
        cout << "Driving fast and furiously." << endl;
    }
};