#include "common.h"

extern "C" {

struct Opening { u32 job; u8 unk004[0x564]; u32 state; u32 time; };
extern Opening *g_event3dOpening;
s32 jobIsValid(u32 job);

void eventOpeningResetValidJob(void)
{
    if (g_event3dOpening != NULL && jobIsValid(g_event3dOpening->job)) {
        Opening *opening = g_event3dOpening;
        opening->time = 0;
        opening->state = 4;
    }
}

} /* extern "C" */
