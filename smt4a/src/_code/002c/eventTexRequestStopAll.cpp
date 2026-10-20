#include "event/2dEvent/2dEventTex.h"

extern "C" {

void FUN_0016572c(u32 handle, s32 arg);
void FUN_001656e0(u32 handle, s32 arg);
s32 FUN_00165058(u32 handle);
s32 jobIsValid(u32 handle);

extern EventTexA *g_eventTex;

void eventTexRequestStopAll(void)
{
    EventTexA *tex = g_eventTex;
    s32 i;

    if (g_eventTex != NULL) {
        for (i = 0; i < tex->count; i++) {
            if (jobIsValid(tex->slots[i]) != 0 && FUN_00165058(tex->slots[i]) != 4) {
                FUN_001656e0(tex->slots[i], 1);
            }
        }
        for (i = 0; i < EVENT_TEX_HANDLES_A; i++) {
            if (jobIsValid(tex->handles[i]) != 0) {
                FUN_0016572c(tex->handles[i], 1);
            }
        }
    }
}

} /* extern "C" */
