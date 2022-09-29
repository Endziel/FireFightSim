//
// Created by avera on 21.04.2022.
//
#pragma once

#include <random>
#include "EventInfo.h"



class IStrategy {
public:
    virtual EventInfo execute() = 0;

    virtual ~IStrategy() = default;

protected:
    double _coordX;
    double _coordY;
    double _arriveTime;
    double _actionTime;
    double _returnTime;

    int _carToSend;

    bool _isFalseAlarm;

//    virtual double generateDouble(int,int);
    virtual void setCoordAndTimes(double,double);



};




