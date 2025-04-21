#ifndef OBSERVABLE_H
#define OBSERVABLE_H

#include <iostream>
#include <set>
#include "../observer_models/observer.h"

using namespace std;

class Observable {
    public:
        set<Observer*> observers; // List of observers

        virtual void addObserver(Observer* observer) = 0;
        virtual void removeObserver(Observer* observer) = 0;
        virtual void notifyObservers() = 0;
        virtual float getInfo() = 0;
        virtual ~Observable() {} // Virtual destructor for proper cleanup of derived classes
};

#endif // OBSERVABLE_H