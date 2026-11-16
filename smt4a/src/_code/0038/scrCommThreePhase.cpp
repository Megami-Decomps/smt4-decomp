#include "shard/Shard0038.h"

extern "C" {

extern s32 scrGetCommandFrame(void);
extern void scrCommMessageSetMode(s32 value);
extern void frameTexInitActive(void);
extern void frameTexRequestFade(s32 value);
extern void messageSlotSet(s32 value);
extern void eventQueueAddUnique(u32 value);

/* Script command: steps through a three-phase sequence on the frame counter; returns 1 once finished. */
u8 scrCommThreePhase(void)
{
    s32 step;

    if (scrGetCommandFrame() == 0) {
        scrCommMessageSetMode(1);
        frameTexInitActive();
        frameTexRequestFade(3);
        return 0;
    }
    if (scrGetCommandFrame() != 1) {
        step = scrGetCommandFrame();
        if (step >= 3) {
            scrCommMessageSetMode(-1);
            messageSlotSet(0);
        }
        return step >= 3;
    }
    eventQueueAddUnique(0x1000222);
    frameTexRequestFade(1);
    return 0;
}

} /* extern "C" */
