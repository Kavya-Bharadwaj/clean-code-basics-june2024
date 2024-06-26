#ifndef __STATE_HANDLER__
#define __STATE_HANDLER__

#include "IContext.h"
#include "IStateHandler.h"

class OffStateHandler : public IStateHandler
{
    void handleState(IContext* context);
    SwitchState handleOffState();
};

class LowStateHandler : public IStateHandler
{
    void handleState(IContext* context);
    SwitchState handleLowState();
};

class ModerateStateHandler : public IStateHandler
{
    void handleState(IContext* context);
    SwitchState handleModerateState();
};

class HighStateHandler : public IStateHandler
{
    void handleState(IContext* context);
    SwitchState handleHighState();
};

#endif