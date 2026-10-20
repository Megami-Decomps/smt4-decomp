#include "event/2dEvent/2dEventTex.h"

extern "C" {

void FUN_003483a8(u32 handle, s32 arg);
s32 jobIsValid(u32 handle);

extern EventTexA *g_eventTex;

void eventTexSetFlag(s32 flag)
{
    s32 i;

    if (g_eventTex != NULL) {
        g_eventTex->flag = flag;
        if (flag != 0) {
            for (i = 0; i < EVENT_TEX_HANDLES_A; i++) {
                if (jobIsValid(g_eventTex->handles[i]) != 0) {
                    FUN_003483a8(g_eventTex->handles[i], 1);
                }
            }
            return;
        }
        for (i = 0; i < EVENT_TEX_HANDLES_A; i++) {
            if (jobIsValid(g_eventTex->handles[i]) != 0) {
                FUN_003483a8(g_eventTex->handles[i], 0);
            }
        }
    }
}

} /* extern "C" */
