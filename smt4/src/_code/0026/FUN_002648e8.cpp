#include "common.h"
#include "code/Code0026_Smt4.h"

extern "C" {

typedef struct Timer {
    /* 0x00 */ u32 flags;
    /* 0x04 */ u8 unk04[8];
    /* 0x0C */ s32 frame;
} Timer;

extern void FUN_003965f0(Timer *timer);
extern void FUN_00396b08(Timer *timer, s32 arg);

/* Counts one frame unless flag 2 is set; after 120 frames restarts the counter via FUN_00396b08. */
static __inline void timerAdvance(Timer *timer)
{
    if ((timer->flags & 2) != 0) {
        return;
    }
    timer->frame++;
    if (timer->frame >= 120) {
        timer->frame = 0;
        FUN_00396b08(timer, 2);
    }
}

/* Unless flag 1 is set: advances the frame counter (unless flag 2), restarting it through FUN_00396b08 after 120 frames, then runs FUN_003965f0. */
void FUN_002648e8(Timer *timer)
{
    if ((timer->flags & 1) == 0) {
        timerAdvance(timer);
        FUN_003965f0(timer);
    }
}

} /* extern "C" */
