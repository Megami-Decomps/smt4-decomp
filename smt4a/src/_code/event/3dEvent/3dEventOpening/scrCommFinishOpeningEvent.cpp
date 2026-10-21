#include "common.h"

struct OpeningEventWork {
    u32 job; // 0x000
    u8 unk004[0x564];
    u32 state; // 0x568
    u32 frame; // 0x56c
};

extern "C" {
extern OpeningEventWork *g_event3dOpening;
s32 scrGetCommandFrame();
u32 jobIsValid(u32 job);

// Request phase4 on frame zero; later finish once the opening event disappears.
u32 scrCommFinishOpeningEvent()
{
    if (scrGetCommandFrame() != 0) {
        if (g_event3dOpening == NULL) {
            return 1;
        }
    }
    else if (g_event3dOpening != NULL && jobIsValid(g_event3dOpening->job)) {
        g_event3dOpening->frame = 0;
        g_event3dOpening->state = 4;
    }
    return 0;
}
}
