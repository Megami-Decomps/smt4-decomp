#include "common.h"

struct OpeningPhase {
    u32 state;
    u32 frame;
};

struct OpeningWork {
    u32 job;
    u8 unk004[0x560];
    OpeningPhase phase;
};

extern "C" {
extern OpeningWork* g_event3dOpening;
u32 scrGetCommandFrame(void);
u32 jobIsValid(u32 job);

u32 scrCommCloseOpeningEvent(void)
{
    if (scrGetCommandFrame() != 0) {
        if (g_event3dOpening == NULL) {
            return 1;
        }
    } else if (g_event3dOpening != NULL && jobIsValid(g_event3dOpening->job)) {
        g_event3dOpening->phase.frame = 0;
        g_event3dOpening->phase.state = 4;
    }
    return 0;
}
}
