#include <iostream>
#include "StateHandlers.h"

void OffStateHandler::handleState(IContext* context)
{
    SwitchState nextState; 
    nextState = this->handleOffState();
    context->setState(nextState);
}

SwitchState OffStateHandler::handleOffState()
{
    std::cout << "Handling OFF state" << std::endl;
    return SwitchState::LOW;
}

void LowStateHandler::handleState(IContext* context)
{
    SwitchState nextState; 
    nextState = this->handleLowState();
    context->setState(nextState);
}

SwitchState LowStateHandler::handleLowState()
{
    std::cout << "Handling LOW state" << std::endl;
    return SwitchState::MODERATE;
}

void ModerateStateHandler::handleState(IContext* context)
{
    SwitchState nextState; 
    nextState = this->handleModerateState();
    context->setState(nextState);
}

SwitchState ModerateStateHandler::handleModerateState()
{
    std::cout << "Handling MODERATE state" << std::endl;
    return SwitchState::HIGH;
}

void HighStateHandler::handleState(IContext* context)
{
    SwitchState nextState; 
    nextState = this->handleHighState();
    context->setState(nextState);
}

SwitchState HighStateHandler::handleHighState()
{
    std::cout << "Handling HIGH state" << std::endl;
    return SwitchState::OFF;
}