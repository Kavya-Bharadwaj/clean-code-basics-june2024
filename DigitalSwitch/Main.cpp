#include <iostream>
#include "DigitalSwitch.h"
#include "IStateHandlerFactory.h"
#include "StateHandlerFactory.h"

int main()
{
    IStateHandlerFactory* factory = new StateHandlerFactory();
    DigitalSwitch dSwitch(SwitchState::OFF, factory);
    
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