#include "event/2dEvent/2dEventTex.h"

extern "C" {

s32 FUN_0031bc88(u32 handle);
s32 jobIsValid(u32 handle);

extern EventTexA *g_eventTex;

/* True when every valid slot's handle passes FUN_0031bc88. */
bool eventTexSlotsReady(void)
{
    EventTexA *tex = g_eventTex;
    u32 handle;
    s32 i;

    if (g_eventTex == NULL) {
        return false;
    }
    for (i = 0; i < tex->count; i++) {
        handle = tex->slots[i];
        if (handle != 0 && jobIsValid(handle) != 0 && FUN_0031bc88(handle) == 0) {
            return false;
        }
    }
    return true;
}

} /* extern "C" */
