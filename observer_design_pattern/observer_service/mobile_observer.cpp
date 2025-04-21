#include <iostream>
#include "../observer_models/mobile_observer.h"

void MobileObserver::update() {
    std::cout << "MobileObserver::update called with temperature = " << observable->getInfo() << endl;
}
