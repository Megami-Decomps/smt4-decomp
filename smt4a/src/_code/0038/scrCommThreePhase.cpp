#include "shard/Shard0038.h"

extern "C" {

extern s32 scrGetCommandFrame(void);
extern void FUN_002c76c0(s32 value);
extern void FUN_0035c6ac(void);
extern void FUN_002e5924(s32 value);
extern void messageSlotSet(s32 value);
extern void eventQueueAddUnique(u32 value);

/* Script command: steps through a three-phase sequence on the frame counter; returns 1 once finished. */
u8 scrCommThreePhase(void)
{
    s32 step;

    if (scrGetCommandFrame() == 0) {
        FUN_002c76c0(1);
        FUN_0035c6ac();
        FUN_002e5924(3);
        return 0;
    }
    if (scrGetCommandFrame() != 1) {
        step = scrGetCommandFrame();
        if (step >= 3) {
            FUN_002c76c0(-1);
            messageSlotSet(0);
        }
        return step >= 3;
    }
    eventQueueAddUnique(0x1000222);
    FUN_002e5924(1);
    return 0;
}

} /* extern "C" */
