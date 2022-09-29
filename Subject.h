//
// Created by avera on 21.04.2022.
//
#include <list>
class Observer;




class Subject {
public:
    virtual void addObserver(Observer*);
    virtual void removeObserver(Observer*);
    virtual void notifyObserver(Observer*);
    virtual void notifyAllObservers();

    virtual ~Subject();

    virtual double getDriveTime() const = 0 ;


protected:
    std::list<Observer*> _listOfObservers;

};


