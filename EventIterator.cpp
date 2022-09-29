//
// Created by avera on 05.05.2022.
//

#include "EventIterator.h"
#include "Utils.h"
#include "Fire.h"
#include "LocalHazard.h"

EventIterator::EventIterator(FireDepartment *fireDep) {
    _fireDep = fireDep;
}

void EventIterator::next() {

    //wygenerj wspolrzedne zdarzenia
    double coordX = generateDouble(49.95855025648944,50.154564013341734);
    double coordY = generateDouble(19.688292482742394,20.02470275868903);
    IStrategy* chosenStrategy;
    if(generateDouble(0,100) > 70){
        chosenStrategy = new Fire(coordX, coordY);
        std::cout << "POZAR"<< std::endl;
    }else{
        chosenStrategy = new LocalHazard(coordX, coordY);
        std::cout << "ZDARZENIE LOKALNE"<< std::endl;

    }
    _fireDep->setStrategy(chosenStrategy);


    _fireDep->execute();

}
