//
// Created by avera on 21.04.2022.
//
#pragma once
#include "CarState.h"

using cartime =  std::chrono::time_point<std::chrono::system_clock>;





class CarBusy : public CarState{
private:
    bool sendCar(Car *, time_t) override;


public:
    virtual ~CarBusy() = default;

    CarBusy(time_t);





};


