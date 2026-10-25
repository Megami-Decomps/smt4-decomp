#include "common.h"

struct OpeningState {
    /* 0x000 */ u32 job;
    /* 0x004 */ u8 unk04[0x560];
    /* 0x564 */ u32 state;
    /* 0x568 */ u32 step;
};
extern "C" {
extern OpeningState *g_event3dOpening;
s32 jobIsValid(u32 job);
/* Requests the valid opening job's exit state. */
void event3dOpeningRequestExit()
{
    if (g_event3dOpening && jobIsValid(g_event3dOpening->job)) {
        g_event3dOpening->step = 0;
        g_event3dOpening->state = 4;
    }
}
}
