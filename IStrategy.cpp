//
// Created by avera on 05.05.2022.
//

#include "IStrategy.h"
#include "Utils.h"

void IStrategy::setCoordAndTimes(double coordX,double coordY) {
    _coordX = coordX;
    _coordY = coordY;
    if(generateDouble(0,100) < 5){
        _actionTime = 0;
        _isFalseAlarm = true;
    }else{
        _actionTime = generateDouble(5,25);
        _isFalseAlarm = false;
    }
    _arriveTime = generateDouble(0,3);
    _returnTime = generateDouble(0,3);
}
