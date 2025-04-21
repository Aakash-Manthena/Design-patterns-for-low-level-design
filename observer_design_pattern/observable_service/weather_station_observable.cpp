#include "../observable_models/weather_station_observable.h"
#include <iostream>

void WeatherStationObservable::addObserver(Observer* observer) {
    observers.insert(observer);
}

void WeatherStationObservable::removeObserver(Observer* observer) {
    observers.erase(observer);
}

void WeatherStationObservable::notifyObservers() {
    for (auto observer : observers) {
        observer->update();
    }
}

void WeatherStationObservable::setTemperature(float temperature) {
    if (this->temperature == temperature) {
        return;
    }
    this->temperature = temperature;
    notifyObservers();
}

float WeatherStationObservable::getInfo() {
    return temperature;
}
