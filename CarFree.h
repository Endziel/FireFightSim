//
// Created by avera on 21.04.2022.
//
#pragma once

#include "CarState.h"



class CarFree : public CarState{

    bool sendCar(Car *, time_t) override;

public:

    virtual ~CarFree() = default;

};


