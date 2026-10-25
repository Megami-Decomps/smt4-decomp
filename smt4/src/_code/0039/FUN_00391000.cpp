/* NON_MATCHING: retail places case 3's flag clear out of line after the epilogue; armcc folds it into the compare chain here. */
#include "common.h"
#include "shard/JobWork.h"

struct IntroWork {
    /* 0x0000 */ u32 flags;
    /* 0x0004 */ u8 unk0004[0x17A0];
    /* 0x17A4 */ s32 state;
    /* 0x17A8 */ u8 unk17A8[4];
    /* 0x17AC */ u32 sound;
    /* 0x17B0 */ u8 animation[0x20];
    /* 0x17D0 */ u8 loader[4];
};

extern "C" {

s32 FUN_002b8ee0(u8 *loader, s32 mode);
u32 FUN_002aa024(s32 group, s32 id);
s32 uiAnimationAdvanceChannel(u8 *animation, s32 channel);

/* Steps the job: waits for its load, starts the sound, then runs the animation channel and
 * finally clears the busy flags. */
u32 FUN_00391000(u32 job)
{
    IntroWork *work = (IntroWork *)jobGetWork(job);

    switch (work->state) {
    case 0:
        if (FUN_002b8ee0(work->loader, 0) != 0) {
            work->state = 1;
            work->flags |= 0x2000;
            work->sound = FUN_002aa024(0x3a, 0x45);
        }
        break;
    case 1:
        return 0;
    case 2:
        if (uiAnimationAdvanceChannel(work->animation, 1) != 0) {
            work->state = 3;
        }
        break;
    case 3:
        work->flags &= ~0x3000;
        break;
    }
    return 0;
}

} /* extern "C" */
