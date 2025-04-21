#ifndef TV_OBSERVER_H
#define TV_OBSERVER_H

#include <iostream>
#include "observer.h"
#include "../observable_models/observable.h"

class TVObserver : public Observer {
    public: 
    Observable* observable;
    TVObserver(Observable* observable) : observable(observable) {}
    void update() override;

};

#endif // TV_OBSERVER_H
