#ifndef __I_STATE_HANDLER_FACTORY__
#define __I_STATE_HANDLER_FACTORY__

#include "Defines.h"
#include "IStateHandler.h"

class IStateHandlerFactory
{
    public:
        virtual IStateHandler* createState(SwitchState state) = 0;
};

#endif