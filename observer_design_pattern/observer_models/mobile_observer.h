#ifndef MOBILE_OBSERVER_H
#define MOBILE_OBSERVER_H

#include <iostream>
#include "observer.h"
#include "../observable_models/observable.h"

class MobileObserver : public Observer {
    public: 
    Observable* observable;

    MobileObserver(Observable* observable) : observable(observable) {}

    void update() override;
};

#endif // MOBILE_OBSERVER_H