//
// Created by avera on 21.04.2022.
//

#include "CarFree.h"
#include "Car.h"
#include "CarBusy.h"


bool CarFree::sendCar(Car * currentCar, time_t timeToSendCar) {

currentCar->changeState(new CarBusy(std::time(NULL) + timeToSendCar ));
    return true;


//wait 5 s


//    currentCar->changeState(new CarFree);

}

