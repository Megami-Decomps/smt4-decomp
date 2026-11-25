#include "shard/Shard003A.h"

extern "C" {

extern s32 scrGetCommandFrame(void);
extern void frameTexEnableAndClearFlags(void);
extern void frameTexApplyMode(s32 value);
extern void eventQueueAddUnique(u32 value);

/* Script command: three-phase sequence on the frame counter; returns 1 once finished. */
u8 scrCommThreePhase2(void)
{
    if (scrGetCommandFrame() == 0) {
        frameTexEnableAndClearFlags();
        frameTexApplyMode(3);
        return 0;
    }
    if (scrGetCommandFrame() == 1) {
        eventQueueAddUnique(0x1000222);
        frameTexApplyMode(1);
        return 0;
    }
    if (scrGetCommandFrame() < 3) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
