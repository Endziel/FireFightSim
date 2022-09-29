//
// Created by avera on 21.04.2022.
//

#include "Observer.h"
#include <array>
#include "Car.h"



class FireBrigadeUnit : public Observer {
private:
    std::array<Car*,5> _cars = {new Car,new Car,new Car,new Car,new Car};
    double _coordX;
    double _coordY;
    std::string _nameOfFireBrigadeUnit;
public:
    std::string getNameOfFireBrigadeUnit() const override;

    double getCoordX() const override;

    double getCoordY() const override;


public:
    FireBrigadeUnit(double,double,std::string);

    bool update(Subject *) override;


};


