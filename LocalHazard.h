//
// Created by avera on 03.04.2022.
//

#pragma once

#include "IStrategy.h"

class LocalHazard : public IStrategy {
public:
    EventInfo execute() override;
    virtual ~LocalHazard() = default;

    LocalHazard(double,double);



};


