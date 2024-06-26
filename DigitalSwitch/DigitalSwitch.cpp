#include "DigitalSwitch.h"
#include "StateHandlers.h"

DigitalSwitch::DigitalSwitch(SwitchState initState)
{
    currentStateHandler = createState(initState);
}

IStateHandler* DigitalSwitch::createState(SwitchState state)
{
    IStateHandler* statePtr = nullptr;
    switch (state)
    {
        case SwitchState::OFF:
            statePtr = new OffStateHandler();
            break;
        case SwitchState::LOW:
            statePtr = new LowStateHandler();
            break;
        case SwitchState::MODERATE:
            statePtr = new ModerateStateHandler();
            break;
        case SwitchState::HIGH:
            statePtr = new HighStateHandler();
            break;
        default:
            break;
    }
    return statePtr;
}

void DigitalSwitch::press()
{
    currentStateHandler->handleState(this);
}

SwitchState DigitalSwitch::getState()
{
    return currentState;
}

void DigitalSwitch::setState(SwitchState nextState)
{
    //delete currentStateHandler;
    //currentStateHandler = createState(nextState);
}
