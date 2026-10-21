#include "shard/Shard003A.h"

extern "C" {

extern s32 scrGetCommandFrame(void);
extern void frameTexEnableAndClearFlags(void);
extern void FUN_002e5924(s32 value);
extern void eventQueueAddUnique(u32 value);

/* Script command: three-phase sequence on the frame counter; returns 1 once finished. */
u8 scrCommThreePhase2(void)
{
    if (scrGetCommandFrame() == 0) {
        frameTexEnableAndClearFlags();
        FUN_002e5924(3);
        return 0;
    }
    if (scrGetCommandFrame() == 1) {
        eventQueueAddUnique(0x1000222);
        FUN_002e5924(1);
        return 0;
    }
    if (scrGetCommandFrame() < 3) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
