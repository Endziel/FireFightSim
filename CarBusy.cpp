//
// Created by avera on 21.04.2022.
//

#include "CarBusy.h"
#include "CarFree.h"


bool CarBusy::sendCar(Car * currentCar, time_t timeToComeBack) {
    if( std::time(NULL) < _timeSendedToAction){
        return false;
    }
    currentCar->changeState(new CarFree());
     return currentCar->_currentState->sendCar(currentCar,timeToComeBack);

}

CarBusy::CarBusy(time_t timeSended) {
    _timeSendedToAction = timeSended;
}
