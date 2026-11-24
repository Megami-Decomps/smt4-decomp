#include "event/2dEvent/2dEventTex.h"
#include "script/ScriptArgs.h"

extern "C" {

void eventTexRegisterAndSortTask(u32 handle);
void eventTexSetCurrent(u32 handle);

/* Starts a right-aligned portrait and registers it as the current event texture. */
u32 FUN_001ed36c(void)
{
    u32 npc = scrGetArg(0);
    u32 variant = scrGetArg(1);

    u32 handle = npc2dCreatePortraitVariantJob(npc, 1, variant);
    if (handle != 0) {
        eventTexSetCurrent(handle);
        eventTexRegisterAndSortTask(handle);
    }
    return 1;
}

} /* extern "C" */
