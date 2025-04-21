#ifndef WEATHER_STATION_OBSERVABLE_H
#define WEATHER_STATION_OBSERVABLE_H

#include <iostream>
#include "../observable_models/observable.h"

using namespace std;

class WeatherStationObservable : public Observable {
    public:
        float temperature;

        WeatherStationObservable() {
            cout << "WeatherStationObservable created" << endl;
        }

        void addObserver(Observer* observer) override;
        void removeObserver(Observer* observer) override;
        void notifyObservers() override;
        float getInfo() override;
        
        void setTemperature(float temperature);    
};



#endif // WEATHER_STATION_OBSERVABLE_H