//
// Created by avera on 21.04.2022.
//
#pragma once
#include "Subject.h"
#include "IStrategy.h"
#include <map>
#include "Observer.h"
#include <iostream>






class FireDepartment : public Subject{
public:

    void execute();

    void setStrategy(IStrategy* strategy);
    double getDriveTime() const override;





private:
    IStrategy *_currentStrategy;

    EventInfo _event;
    std::map <double, Observer*> _mapOfClosestBrigadeUnits;
     void createMapOfDistance();
     double distanceInGS84(double lat1, double lon1, double lat2, double lon2);


public:
//    bool updateSendedCars();



};


