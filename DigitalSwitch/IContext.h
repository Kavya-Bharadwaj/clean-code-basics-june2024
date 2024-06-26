#ifndef __I_CONTEXT__
#define __I_CONTEXT__

#include "Defines.h"

class IContext
{
    public:
        virtual void setState(SwitchState nextState) = 0;
};

#endif