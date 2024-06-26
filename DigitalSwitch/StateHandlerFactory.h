#ifndef __STATE_HANDLER_FACTORY__
#define __STATE_HANDLER_FACTORY__

#include <map>
#include <functional>
#include "Defines.h"
#include "IStateHandler.h"
#include "IStateHandlerFactory.h"

typedef std::function<IStateHandler*()> StateCreatorFunction;

class StateHandlerFactory : public IStateHandlerFactory
{
    private:
        static std::map<SwitchState, StateCreatorFunction> instances;

    public:
        StateHandlerFactory();
        ~StateHandlerFactory();
        static bool registerState(SwitchState state, StateCreatorFunction func);
        void populateInstancesMap();
        void deleteStateHandlerInstances();
        IStateHandler* createState(SwitchState state);
};

#endif