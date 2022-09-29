//
// Created by avera on 21.04.2022.
//

#include "FireBrigadeUnit.h"
#include "Subject.h"


FireBrigadeUnit::FireBrigadeUnit(double coordX,double coordY,std::string nameOfBrigadeUnit) {
    _coordX = coordX;
    _coordY = coordY;
    _nameOfFireBrigadeUnit = nameOfBrigadeUnit;



}

bool FireBrigadeUnit::update(Subject * department) {
    for(auto car : _cars){
        if(car->sendCar(department->getDriveTime())){
            return true;
        }
    }
    return false;
}

double FireBrigadeUnit::getCoordX() const {
    return _coordX;
}

double FireBrigadeUnit::getCoordY() const {
    return _coordY;
}

std::string FireBrigadeUnit::getNameOfFireBrigadeUnit() const {
    return _nameOfFireBrigadeUnit;
}
