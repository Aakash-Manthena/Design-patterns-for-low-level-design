#include <iostream>
#include "../observer_models/tv_observer.h"

using namespace std;

void TVObserver::update() {
    cout << " TVObserver::update called with temperature = " << observable->getInfo() << endl;
}
