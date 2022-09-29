//
// Created by avera on 21.04.2022.
//

#include "FireDepartment.h"
#include <math.h>
#include <time.h>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

#include <iostream>




double FireDepartment::getDriveTime() const {
    return _event.driveTime;
}

//bool FireDepartment::updateSendedCars() {
//    if(_event.carToSend > 0){
//        _event.carToSend--;
//        return true;
//    }
//    return false;
//}

void FireDepartment::execute() {
    /*TODO
    ustalic do ktorego fire brigade wyslac
     przeslac do executa liste obserwerow
     Iterator bedzie tworzyl zdarzenia i uruchamimal set strategy i execute na fire depratment
     */
    _event = _currentStrategy->execute();
    createMapOfDistance();

    do{

        for(auto elem : _mapOfClosestBrigadeUnits){

            while(_event.carToSend > 0 and elem.second->update(this)){
                _event.carToSend--;
                std::cout << "wysyłam auto z jednostki " << elem.second->getNameOfFireBrigadeUnit() << std::endl;
                if(_event.isFalseAlarm == true){
                    std::cout << "falszywy alarm"<< std::endl;
                }

            }
            if(_event.carToSend == 0){
                break;
            }

        }

        if(_event.carToSend > 0){
            std::cout << "brak wolnych aut, odpytuje jednostki od poczatku " << std::endl;
            sleep(1);
        }
    }while(_event.carToSend > 0);

    _mapOfClosestBrigadeUnits.clear();


}



double FireDepartment::distanceInGS84(double lat1, double lon1, double lat2, double lon2) {
    double p = 0.017453292519943295;    // Math.PI / 180
    double a = 0.5 - cos((lat2 - lat1) * p)/2 +
               cos(lat1 * p) * cos(lat2 * p) *
               (1 - cos((lon2 - lon1) * p))/2;

    return 12742 * asin(sqrt(a)); // 2 * R; R = 6371 km
}

void FireDepartment::createMapOfDistance() {
    for(auto* elem : _listOfObservers){
        double distance = distanceInGS84(elem->getCoordX(),elem->getCoordY(),_event.coordX,_event.coordY);
        _mapOfClosestBrigadeUnits[distance] = elem;
    }
}

void FireDepartment::setStrategy(IStrategy *strategy) {
    _currentStrategy = strategy;

}


