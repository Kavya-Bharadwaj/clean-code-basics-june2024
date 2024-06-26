#ifndef __DIGITAL_SWITCH__
#define __DIGITAL_SWITCH__

#include "Defines.h"
#include "IContext.h"
#include "IStateHandler.h"
#include "StateHandlers.h"
#include "IStateHandlerFactory.h"

class DigitalSwitch : public IContext
{
    private:
        SwitchState currentState;
        IStateHandler* currentStateHandler;
        IStateHandlerFactory* stateHandlerFactory;
    public:
        DigitalSwitch(SwitchState initState, IStateHandlerFactory* factory);
        ~DigitalSwitch();
        void press();
        SwitchState getState();
        virtual void setState(SwitchState nextState);
};

#endif