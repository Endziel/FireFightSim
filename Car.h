//
// Created by avera on 21.04.2022.
//
#pragma once

#include <thread>

#include <iostream>
#include <chrono>
#include <random>

#include <chrono>

class CarBusy;
class CarFree;
class CarState;


class Car {
private:

    friend class CarState;
    CarState* _currentState;
    friend class CarBusy;
    friend class CarFree;

    void changeState(CarState*);


public:
    bool sendCar(time_t time);

    Car();

    virtual ~Car() = default;


};


