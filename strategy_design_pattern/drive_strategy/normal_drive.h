#pragma once
#include "drive_strategy.h"
#include <iostream>

using namespace std;

class NormalDriveStrategy : public DriveStrategy {
public:
    void drive() override {
        cout << "Driving normally." << endl;
    }
};