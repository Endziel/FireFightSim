//
// Created by avera on 21.04.2022.
//

#include "Car.h"
#include <iostream>

#include "CarFree.h"


bool Car::sendCar(time_t time){
    return _currentState->sendCar(this,time);

}

void Car::changeState(CarState * state) {
    _currentState = state;
}


Car::Car() {
    _currentState = new CarFree;
}
