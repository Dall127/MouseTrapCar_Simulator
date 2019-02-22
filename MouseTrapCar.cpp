//
// Created by Dallin Burton on 2/20/19.
//
#include <math.h>
#include "MouseTrapCar.h"

MouseTrapCar::MouseTrapCar() {
    length = 0.0;
    wheelDiameter = 0.0;
    forwardWind = 0;
    backwardWind =0;
    mass = 0.0;

}

void MouseTrapCar::set_length(double _length) {
    length = _length;
}

void MouseTrapCar::set_wheel_diameter(double _wheelDiameter) {
    wheelDiameter = _wheelDiameter;

}

void MouseTrapCar::set_fwind(int _fWind) {
    forwardWind = _fWind;
}

void MouseTrapCar::set_bwind(int _BWind) {
    backwardWind = _BWind;
}

void MouseTrapCar::simulate() {

}

double MouseTrapCar::get_length() {
    return length;
}

double MouseTrapCar::get_wheel_diameter() {
    return wheelDiameter;
}

int MouseTrapCar::get_forward_wind() {
    return forwardWind;
}

int MouseTrapCar::get_backward_wind() {
    return backwardWind;
}

void MouseTrapCar::set_mass(double _mass) {
    mass = _mass;

}

double MouseTrapCar::get_mass() {
    return mass;
}


