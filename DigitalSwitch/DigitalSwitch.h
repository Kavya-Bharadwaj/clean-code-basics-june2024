#ifndef __DIGITAL_SWITCH__
#define __DIGITAL_SWITCH__

#include "Defines.h"
#include "IContext.h"
#include "IStateHandler.h"
#include "StateHandlers.h"

class DigitalSwitch : public IContext
{
    private:
        SwitchState currentState;
        IStateHandler* currentStateHandler;
    public:
        DigitalSwitch(SwitchState initState);
        void press();
        SwitchState getState();
        virtual void setState(SwitchState nextState);
        IStateHandler* createState(SwitchState state);
};

#endif