//
// Created by avera on 21.04.2022.
//
#pragma once

#include "Car.h"
#include <chrono>
#include <ctime>

using cartime =  std::chrono::time_point<std::chrono::system_clock>;

class Car;




class CarState {
protected:
    bool _isSended = true;
    time_t _timeSendedToAction;

public:
    virtual bool sendCar(Car*, time_t);

    void changeState(Car*,CarState*);

    virtual bool getIsSended();

    virtual ~CarState() = default;




};






