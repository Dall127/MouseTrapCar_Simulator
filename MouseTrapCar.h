//
// Created by Dallin Burton on 2/20/19.
//

#ifndef MOUSETRAPCAR_SIMULATOR_MOUSETRAPCAR_H
#define MOUSETRAPCAR_SIMULATOR_MOUSETRAPCAR_H


class MouseTrapCar {
private:

    //vehicle information
    double length;
    double wheelDiameter;
    int forwardWind;
    int backwardWind;
    double mass;

    //Constants
    const float friction = 0.42;

public:
    MouseTrapCar();


    //setters
    void set_length(double);
    void set_wheel_diameter(double);
    void set_fwind(int);
    void set_bwind(int);
    void set_mass(double);

    //getters
    double get_length();
    double get_wheel_diameter();
    int get_forward_wind();
    int get_backward_wind();
    double get_mass();



    //member method
    void simulate();



};


#endif //MOUSETRAPCAR_SIMULATOR_MOUSETRAPCAR_H
