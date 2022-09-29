#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include <iostream>
#include <cstdlib>

#include "Car.h"
#include "FireBrigadeUnit.h"
#include "FireDepartment.h"
#include "Fire.h"

#include "EventIterator.h"





int main() {

    FireDepartment fireDep;
    FireBrigadeUnit JRG_Szkoly_Aspirantow_PSP(50.07730329653961, 20.03277177730828,"JRG_Szkoly_Aspirantow_PSP");
    FireBrigadeUnit JRG_Skawina(49.96853299891179, 19.799494913590603,"JRG_Skawina");
    FireBrigadeUnit LSP_Balice(50.074153216642536, 19.785685739635806,"LSP_Balice");
    FireBrigadeUnit JRG_1(50.255442618200796, 19.089810214527336,"JRG_1");
    FireBrigadeUnit JRG_2(50.21223386296734, 18.970588486618695,"JRG_2");
    FireBrigadeUnit JRG_3(50.25628362539711, 19.022470928947513,"JRG_3");
    FireBrigadeUnit JRG_4(50.037826434511224, 20.005691096392248,"JRG_4");
    FireBrigadeUnit JRG_5(50.09185284318737, 19.920027698249513,"JRG_5");
    FireBrigadeUnit JRG_6(50.016241034983196, 20.01559589639147,"JRG_6");
    FireBrigadeUnit JRG_7(50.094261401974215, 19.977391083009447,"JRG_7");




    EventIterator iter(&fireDep);


    fireDep.addObserver(&JRG_Szkoly_Aspirantow_PSP);
    fireDep.addObserver(&JRG_Skawina);
    fireDep.addObserver(&LSP_Balice);
    fireDep.addObserver(&JRG_1);
    fireDep.addObserver(&JRG_2);
    fireDep.addObserver(&JRG_3);
    fireDep.addObserver(&JRG_4);
    fireDep.addObserver(&JRG_5);
    fireDep.addObserver(&JRG_6);
    fireDep.addObserver(&JRG_7);




    for(int i = 0; i < 100; i++){
        iter.next();
        sleep(1);
    }


//UML
//szkoly znalezc
//printy informacyjne














    return 0;
}
