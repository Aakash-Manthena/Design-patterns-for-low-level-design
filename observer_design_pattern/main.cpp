#include <iostream>
#include "./observable_models/observable.h"
#include "./observable_models/weather_station_observable.h"
#include "./observer_models/observer.h"
#include "./observer_models/mobile_observer.h"
#include "./observer_models/tv_observer.h"

using namespace std;

int main() {
    cout << "Hello, World!" << endl;

    WeatherStationObservable* weather_station = new WeatherStationObservable();
    MobileObserver* mobile_observer = new MobileObserver(weather_station);
    TVObserver* tv_observer = new TVObserver(weather_station);

    weather_station->addObserver(mobile_observer);
    weather_station->addObserver(tv_observer);

    weather_station->setTemperature(25.0f);
    weather_station->setTemperature(30.0f);

    return 0;
}
