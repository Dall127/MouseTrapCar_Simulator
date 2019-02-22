//
// Created by Dallin Burton on 2019-02-21.
//

#ifndef MOUSETRAPCAR_SIMULATOR_INTERFACE_H
#define MOUSETRAPCAR_SIMULATOR_INTERFACE_H
#include <iostream>
#include "MouseTrapCar.h"



class Interface {

private:
    std::string os;


public:
    //
    Interface();



    //member methods
    int controller();
    void HUD(MouseTrapCar);
    void reset();
    std::string get_os();
};


#endif //MOUSETRAPCAR_SIMULATOR_INTERFACE_H
