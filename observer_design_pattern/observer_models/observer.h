#ifndef OBSERVER_H
#define OBSERVER_H


class Observer {
    public:
        virtual void update() = 0; // Pure virtual function to be implemented by concrete observers
        virtual ~Observer() {} // Virtual destructor for proper cleanup of derived classes
};

#endif // OBSERVER_H
