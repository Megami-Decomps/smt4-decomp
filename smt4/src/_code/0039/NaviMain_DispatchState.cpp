#include "common.h"

struct NaviStateObject;
typedef void (NaviStateObject::*NaviStateHandler)(void);

struct NaviStateObject {
    /* 0x000 */ u32 unk000;
    /* 0x004 */ s32 state;
    /* 0x008 */ u8 unk008[0xb0c];
    /* 0xB14 */ NaviStateHandler handlers[1];
};

// Invoke the current state's member callback when one is installed.
extern "C" void NaviMain_DispatchState(NaviStateObject* object)
{
    if (object->handlers[object->state] != NULL)
        (object->*object->handlers[object->state])();
}
