#ifndef __STATE_HANDLER__
#define __STATE_HANDLER__

#include "IContext.h"
#include "IStateHandler.h"

class OffStateHandler : public IStateHandler
{
    public:
        static bool isRegistered;
    public:
        static IStateHandler* createOffStateHandler();
        void handleState(IContext* context);
        SwitchState handleOffState();
};

class LowStateHandler : public IStateHandler
{
    public:
        static bool isRegistered;
    public:
        static IStateHandler* createLowStateHandler();
        void handleState(IContext* context);
        SwitchState handleLowState();
};

class ModerateStateHandler : public IStateHandler
{
    public:
        static bool isRegistered;
    public:
        static IStateHandler* createModerateStateHandler();
        void handleState(IContext* context);
        SwitchState handleModerateState();
};

class HighStateHandler : public IStateHandler
{
    public:
        static bool isRegistered;
    public:
        static IStateHandler* createHighStateHandler();
        void handleState(IContext* context);
        SwitchState handleHighState();
};

#endif