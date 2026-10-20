#include "event/2dEvent/2dEventTex.h"

extern "C" {

s32 eventTexJobHandlesDone(u32 handle);
s32 jobIsValid(u32 handle);

extern EventTexA *g_eventTex;

/* True when every valid handle passes eventTexJobHandlesDone. */
bool eventTexHandlesReady(void)
{
    EventTexA *tex = g_eventTex;
    u32 handle;
    s32 i;

    if (g_eventTex == NULL) {
        return false;
    }
    for (i = 0; i < EVENT_TEX_HANDLES_A; i++) {
        handle = tex->handles[i];
        if (handle != 0 && jobIsValid(handle) != 0 && eventTexJobHandlesDone(handle) == 0) {
            return false;
        }
    }
    return true;
}

} /* extern "C" */
