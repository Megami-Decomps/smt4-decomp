/* NON_MATCHING: retail uses `mov r1, #4` where armcc emits `mov r1, #4`. */
#include "common.h"

extern "C" {

struct Opening { u32 job; u8 unk004[0x564]; u32 state; u32 time; };
extern Opening *g_event3dOpening;
s32 jobIsValid(u32 job);

void eventOpeningResetValidJob(void)
{
    if (g_event3dOpening != NULL && jobIsValid(g_event3dOpening->job)) {
        Opening *opening = g_event3dOpening;
        opening->state = 4;
        opening->time = 0;
    }
}

} /* extern "C" */
