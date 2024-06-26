#include "StateHandlerFactory.h"

std::map<SwitchState, StateCreatorFunction> StateHandlerFactory::instances;

StateHandlerFactory::StateHandlerFactory()
{
   
}

StateHandlerFactory::~StateHandlerFactory()
{
    deleteStateHandlerInstances();
}

bool StateHandlerFactory::registerState(SwitchState state, StateCreatorFunction func)
{
    StateHandlerFactory::instances[state] = func;
    return true;
}

void StateHandlerFactory::deleteStateHandlerInstances()
{
    for (auto it = instances.begin(); it != instances.end(); it++)
    {
        //delete it->second;
    }
}

IStateHandler* StateHandlerFactory::createState(SwitchState state)
{
    IStateHandler* stateHandlerPtr = nullptr;
    auto itr = instances.find(state);
    if(itr != instances.end())
    {
        stateHandlerPtr = (itr->second)();
    }
    return stateHandlerPtr;
}