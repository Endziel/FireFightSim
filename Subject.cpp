//
// Created by avera on 21.04.2022.
//

#include "Subject.h"
#include "Observer.h"

void Subject::addObserver(Observer * observer) {
    _listOfObservers.push_back(observer);
}

void Subject::removeObserver(Observer * observer) {
    _listOfObservers.remove(observer);

}

void Subject::notifyObserver(Observer * observer) {
observer->update(this);
}

void Subject::notifyAllObservers() {
    for (auto observer : _listOfObservers){
        observer->update(this);
    }
}

Subject::~Subject() {

}
