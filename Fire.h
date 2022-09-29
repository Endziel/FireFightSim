//
// Created by avera on 03.04.2022.
//

#include "IStrategy.h"


class Fire : public IStrategy  {
public:
    Fire(double,double);


EventInfo execute() override;

};



