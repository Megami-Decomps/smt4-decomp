#include "event/eventCommand.h"

extern "C" {

extern EventCommandGlobals g_eventCommand;

u32 effectProcessCreate(u32 kind);
u32 shakeEffectAlloc(void);
void eventCommandSetPendingCleanup(u32 value);

/* Script command: starts the shake effect and marks the event command for cleanup. */
u32 FUN_002d87b4(void)
{
    g_eventCommand.job = effectProcessCreate(1);
    eventCommandSetPendingCleanup(shakeEffectAlloc());
    return 1;
}

} /* extern "C" */
