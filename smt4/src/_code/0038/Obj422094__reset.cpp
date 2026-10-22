#include "classes/Obj422094.h"

extern "C" void uiStateResetHook();

/* Forwards to the empty hook immediately following this method in retail. */
void Obj422094::reset()
{
    uiStateResetHook();
}
