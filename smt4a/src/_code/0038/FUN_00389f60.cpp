#include "event/2dEvent/2dEventTex.h"

extern "C" {

s32 jobIsValid(u32 handle);

extern EventTexA *g_eventTex; /* 0x57f3b0 */

/* Drops finished handles, then stores the new one in the first free handle slot. */
void FUN_00389f60(u32 handle)
{
    EventTexA *tex = g_eventTex;
    s32 i;

    for (i = 0; i < EVENT_TEX_HANDLES_A; i++) {
        if (jobIsValid(tex->handles[i]) == 0) {
            tex->handles[i] = 0;
        }
    }
    for (i = 0; i < EVENT_TEX_HANDLES_A; i++) {
        if (tex->handles[i] == 0) {
            tex->handles[i] = handle;
            return;
        }
    }
}

} /* extern "C" */
