#include <iostream>
#include "DigitalSwitch.h"

int main()
{
    DigitalSwitch dSwitch(SwitchState::OFF);
    
    std::cout << "Press the Switch - 1" << std::endl;
    dSwitch.press();

    std::cout << "Press the Switch - 2" << std::endl;
    dSwitch.press();

    std::cout << "Press the Switch - 3" << std::endl;
    dSwitch.press();

    std::cout << "Press the Switch - 4" << std::endl;
    dSwitch.press();

    std::cout << "Press the Switch - 5" << std::endl;
    dSwitch.press();

    return 0;
}