//
// Created by avera on 21.04.2022.
//
#pragma once

#include "Car.h"
#include <chrono>
#include <ctime>


class Car;




class CarState {
protected:
//    bool _isSended = true;
    time_t _timeSendedToAction;

public:
    virtual bool sendCar(Car*, time_t) = 0;

    void changeState(Car*,CarState*);

//    virtual bool getIsSended();

    virtual ~CarState() = default;




};






