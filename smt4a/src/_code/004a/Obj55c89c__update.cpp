#include "classes/Obj55c89c.h"

/* Invoke the installed handler for the current menu state. */
extern "C" void _ZN9Obj55c89c6updateEv(BibleMenuHandlerView *menu)
{
    if (menu->handlers[menu->state] != NULL) {
        (menu->*menu->handlers[menu->state])();
    }
}
