#include "common.h"

class ExtendedStateHandler {
public:
    typedef void (ExtendedStateHandler::*Callback)();
    u32 unk00; // 0x00
    s32 state; // 0x04
    u8 unk08[0x13f0]; // 0x08
    Callback handlers[1]; // 0x13f8
};

// Dispatch the selected extended-state member callback.
extern "C" void stateHandlerCallExtended(ExtendedStateHandler* handler)
{
    if (handler->handlers[handler->state] != NULL) {
        (handler->*handler->handlers[handler->state])();
    }
}
