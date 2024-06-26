#include "DigitalSwitch.h"
#include "StateHandlers.h"
#include <iostream>

DigitalSwitch::DigitalSwitch(SwitchState initState, IStateHandlerFactory* factory)
{
    stateHandlerFactory = factory;
    if(stateHandlerFactory != nullptr)
    {
        currentStateHandler = stateHandlerFactory->createState(initState);
    }
}

DigitalSwitch::~DigitalSwitch()
{
    delete stateHandlerFactory;
}

void DigitalSwitch::press()
{
    std::cout << "Call currentStateHandler->handleState\n";
    currentStateHandler->handleState(this);
}

SwitchState DigitalSwitch::getState()
{
    return currentState;
}

void DigitalSwitch::setState(SwitchState nextState)
{
    delete currentStateHandler;
    currentStateHandler = stateHandlerFactory->createState(nextState);
}
