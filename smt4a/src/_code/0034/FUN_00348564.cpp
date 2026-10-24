#include "event/eventCommand.h"

extern "C" {

extern EventCommandGlobals g_eventCommand;

u32 FUN_0031b654(u32 kind);
u32 shakeEffectAlloc(void);
void eventCommandSetPendingCleanup(u32 value);

/* Script command: starts the shake effect and marks the event command for cleanup. */
u32 FUN_00348564(void)
{
    g_eventCommand.job = FUN_0031b654(1);
    eventCommandSetPendingCleanup(shakeEffectAlloc());
    return 1;
}

} /* extern "C" */
