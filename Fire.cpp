//
// Created by avera on 03.04.2022.
//

#include "Fire.h"

EventInfo Fire::execute() {
EventInfo event;
event.coordY = _coordY;
event.coordX = _coordX;
event.carToSend = _carToSend;
event.isFalseAlarm = _isFalseAlarm;
event.driveTime = _actionTime + _returnTime + _arriveTime;

    return event;
}

Fire::Fire(double coordX, double coordY) {
    setCoordAndTimes(coordX,coordY);
_carToSend = 3;


}
