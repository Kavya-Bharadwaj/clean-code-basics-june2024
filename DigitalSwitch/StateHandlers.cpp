#include <iostream>
#include "StateHandlers.h"
#include "StateHandlerFactory.h"
#include "Defines.h"

bool OffStateHandler::isRegistered = StateHandlerFactory::registerState(SwitchState::OFF, &OffStateHandler::createOffStateHandler);
bool LowStateHandler::isRegistered = StateHandlerFactory::registerState(SwitchState::LOW, &LowStateHandler::createLowStateHandler);
bool ModerateStateHandler::isRegistered = StateHandlerFactory::registerState(SwitchState::MODERATE, &LowStateHandler::createLowStateHandler);
bool HighStateHandler::isRegistered = StateHandlerFactory::registerState(SwitchState::HIGH, &HighStateHandler::createHighStateHandler);

IStateHandler* OffStateHandler::createOffStateHandler()
{
    return new OffStateHandler();
}

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

IStateHandler* LowStateHandler::createLowStateHandler()
{
    return new LowStateHandler();
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

IStateHandler* ModerateStateHandler::createModerateStateHandler()
{
    return new ModerateStateHandler();
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

IStateHandler* HighStateHandler::createHighStateHandler()
{
    return new HighStateHandler();
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