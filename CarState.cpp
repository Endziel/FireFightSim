//
// Created by avera on 26.04.2022.
//
#include "CarState.h"
#include "Car.h"


bool CarState::sendCar(Car * currentCar, time_t timeToSend) {
    return false;
}

void CarState::changeState(Car* c, CarState *cs) {
    c->changeState(cs);
}

bool CarState::getIsSended() {
    return _isSended;
}
