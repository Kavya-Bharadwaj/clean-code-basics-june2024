#ifndef __I_STATEHANDLER__
#define __I_STATEHANDLER__

#include "Defines.h"
#include "IContext.h"

class IStateHandler
{
    public:
        virtual void handleState(IContext* context) = 0;
};

#endif