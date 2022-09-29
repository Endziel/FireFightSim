//
// Created by avera on 21.04.2022.
//
#pragma once
#include <iostream>
class Subject;

class Observer {
public:
    virtual bool update(Subject*) = 0;

    virtual double getCoordX() const = 0;

    virtual double getCoordY() const = 0;

    virtual ~Observer() = default;

    virtual std::string getNameOfFireBrigadeUnit() const = 0;


};



