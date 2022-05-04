//
// Created by avera on 21.04.2022.
//
#pragma once

#include <thread>

#include <iostream>
#include <chrono>
#include <random>

//#include "CarBusy.h"
//#include "CarFree.h"

#include <chrono>

class CarBusy;
class CarFree;
class CarState;


class Car {
private:
//    CarBusy _carBusy;
//    CarFree _carFree;
//std::chrono::mi
    friend class CarState;
    CarState* _currentState;
    friend class CarBusy;
    friend class CarFree;

    void changeState(CarState*);




//    bool _isFree;
//    double _time;

public:
    bool sendCar(time_t time);
//    int count;
    Car();


    virtual ~Car() = default;

//    void sendCar();
//    static void waitCar(){
//        srand(time(0));
//        std::this_thread::sleep_for (std::chrono::seconds(rand()%3));
//        std::cout << "hello from waitCar"<<std::endl;
//    };



};


