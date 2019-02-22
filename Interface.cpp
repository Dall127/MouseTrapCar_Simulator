//
// Created by Dallin Burton on 2019-02-21.
//

#include "Interface.h"
#include <unistd.h>
#include <term.h>
#ifdef _WIN32 || _WIN64
#include <windows.h>
#endif



int Interface::controller(){

    std::cout << " \n ";
    std::cout << "---------Options---------" << std::endl;
    std::cout << "| -1: exit application   |" << std::endl;
    std::cout << "|  1: set mass           |" << std::endl;
    std::cout << "|  2: set wheel diameter |" << std::endl;
    std::cout << "|  3: set length         |" << std::endl;
    std::cout << "|  4: set forward wind   |" << std::endl;
    std::cout << "|  5: set backward wind  |" << std::endl;
    std::cout << "|  6: Simulate run       |" << std::endl;
    std::cout << "--------------------------" << std::endl;
    std::cout << " \n \n";
    std::cout << "command: ";
    int response;
    std::cin >> response;
    return response;
}



void Interface::HUD(MouseTrapCar car) {

    std::cout << " \n \n";
    std::cout << " Os: " << get_os() << std::endl;
    std::cout <<"---------Information HUD----------"<< std::endl;
    std::cout <<"       Wheel Diameter:   " << car.get_wheel_diameter() << std::endl;
    std::cout <<"       Mass:             " << car.get_mass() << std::endl;
    std::cout <<"       Length:           " << car.get_length() << std::endl;
    std::cout <<"       Forward Wind:     " << car.get_forward_wind() << std::endl;
    std::cout <<"       Backward Wind:    " << car.get_backward_wind() << std::endl;
    std::cout <<"----------------------------------"<< std::endl;
    std::cout << " \n ";
}

void Interface::reset() {
    #ifdef _WIN32 || _WIN64
        HANDLE                     hStdOut;
        CONSOLE_SCREEN_BUFFER_INFO csbi;
        DWORD                      count;
        DWORD                      cellCount;
        COORD                      homeCoords = { 0, 0 };

        hStdOut = GetStdHandle( STD_OUTPUT_HANDLE );
        if (hStdOut == INVALID_HANDLE_VALUE) return;
        /* Get the number of cells in the current buffer */
        if (!GetConsoleScreenBufferInfo( hStdOut, &csbi )) return;
        cellCount = csbi.dwSize.X *csbi.dwSize.Y;

        /* Fill the entire buffer with spaces */
        if (!FillConsoleOutputCharacter(
                hStdOut,
                (TCHAR) ' ',
                cellCount,
                homeCoords,
                &count
                )) return;
        /* Fill the entire buffer with the current colors and attributes */
        if (!FillConsoleOutputAttribute(
                hStdOut,
                csbi.wAttributes,
                cellCount,
                homeCoords,
                &count
                )) return;

        /* Move the cursor home */
        SetConsoleCursorPosition( hStdOut, homeCoords );
    #elif __linux__ || __unix || __unix__ || __APPLE__ || __MACH__
        std::cout << "\x1B[2J\x1B[H";

    #else
        for (int i = 0; i < 20; ++i) {
            std::cout << "\n \n \n \n \n \n"
        }
    #endif


}

std::string Interface::get_os() {
    return os;
}

Interface::Interface() {
    #ifdef _WIN32
        os = "Windows 32-bit";
    #elif _WIN64
        os = "Windows 64-bit";
    #elif __unix || __unix__
        os = "Unix";
    #elif __linux__
        os = "Linux";
    #elif __FreeBSD__
        os = "FreeBSD";
    #elif __APPLE__ || __MACH__
        os = "Mac OSX";
    #else
        os = "Other";
    #endif

}

