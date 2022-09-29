//
// Created by avera on 05.05.2022.
//

#pragma once
#include "Iterator.h"
#include "FireDepartment.h"
#include <iostream>


class EventIterator :public Iterator {
private:
    FireDepartment *_fireDep;


public:
    EventIterator(FireDepartment *);

    void next() override;

    virtual ~EventIterator() = default;



};



