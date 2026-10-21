#include "shard/W6_W6Match2_StateHandler.h"

// Dispatch the selected state through its C++ member-function callback.
extern "C" void stateHandlerCall(StateHandler* handler)
{
    if (handler->handlers[handler->state] != NULL) {
        (handler->*handler->handlers[handler->state])();
    }
}
