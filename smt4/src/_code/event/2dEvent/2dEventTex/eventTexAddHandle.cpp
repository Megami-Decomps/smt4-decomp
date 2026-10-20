#include "event/2dEvent/2dEventTex.h"

extern "C" {

s32 jobIsValid(u32 handle);

extern u32 g_eventTexHandles[EVENT_TEX_SLOTS];

/* Stores a texture handle in the first slot whose handle is no longer valid. */
void eventTexAddHandle(u32 handle)
{
    s32 i;

    for (i = 0; i < EVENT_TEX_SLOTS; i++) {
        if (jobIsValid(g_eventTexHandles[i]) == 0) {
            g_eventTexHandles[i] = handle;
            return;
        }
    }
}

} /* extern "C" */
