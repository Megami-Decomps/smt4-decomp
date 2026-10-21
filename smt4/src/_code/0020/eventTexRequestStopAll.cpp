#include "event/2dEvent/2dEventTex.h"

extern "C" {

void jobBlendSetRate(u32 handle, s32 arg);
void jobSetIntensity(u32 handle, s32 arg);
s32 jobGetStatus(u32 handle);
s32 jobIsValid(u32 handle);

extern EventTex *g_eventTex;

void eventTexRequestStopAll(void)
{
    EventTex *tex = g_eventTex;
    s32 i;

    if (g_eventTex != NULL) {
        for (i = 0; i < tex->count; i++) {
            if (jobIsValid(tex->slots[i]) != 0 && jobGetStatus(tex->slots[i]) != 4) {
                jobSetIntensity(tex->slots[i], 1);
            }
        }
        for (i = 0; i < EVENT_TEX_HANDLES; i++) {
            if (jobIsValid(tex->handles[i]) != 0) {
                jobBlendSetRate(tex->handles[i], 1);
            }
        }
    }
}

} /* extern "C" */
