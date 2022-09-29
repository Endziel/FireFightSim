//
// Created by avera on 03.04.2022.
//

#include "LocalHazard.h"

EventInfo LocalHazard::execute() {
    EventInfo event;
    event.coordY = _coordY;
    event.coordX = _coordX;
    event.carToSend = _carToSend;
    event.isFalseAlarm = _isFalseAlarm;
    event.driveTime = _actionTime + _returnTime + _arriveTime;

    return event;
}



LocalHazard::LocalHazard(double coordX, double coordY) {
    setCoordAndTimes(coordX,coordY);
    _carToSend = 2;
}
