#include <iostream>
#include "MouseTrapCar.h"
#include "Interface.h"








int main() {



    Interface Operator = Interface();
    MouseTrapCar Car = MouseTrapCar();
    int input;

    do {
        Operator.HUD(Car);
        input = Operator.controller();
        switch (input) {
            case 0 :
                std::cout << "Response was not valid." << std::endl;

            case 1 : {
                double mass;
                std::cout << "\n \nEnter mass: ";
                std::cin >> mass;
                Car.set_mass(mass);
                break;
            }
            case 2 : {
                std::cout << "\n \nEnter wheel diameter: ";
                double wheelDiameter;
                std::cin >> wheelDiameter;
                Car.set_wheel_diameter(wheelDiameter);
                break;
            }
            case 3 : {
                std::cout << "\n \nEnter length: ";
                double length;
                std::cin >> length;
                Car.set_length(length);
                break;
            }
            case 4 : {
                std::cout << "\n \nEnter forward wind: ";

                int wind;
                std::cin >> wind;
                Car.set_fwind(wind);
                break;

            }
            case 5 : {
                std::cout << "\n \nEnter bacwkard wind: ";

                int wind;
                std::cin >> wind;
                Car.set_bwind(wind);
                break;

            }
            case 6 : {
                Car.simulate();
                break;
                
            }
            default: {
                break;
            }
        }
        Operator.reset();
    }
    while(input!= -1);














    return 0;
}