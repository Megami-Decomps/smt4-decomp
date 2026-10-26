/* NON_MATCHING: restored s32(u32 handle) task callback and forwarded jobGetWork handle; icon rectangle argument scheduling and frameB modulo scratch register differ (204 rows each). */
#include "common.h"
#include "shard/W6_W6Match2_ScrollList.h"
#include "shard/JobWork.h"

#define INTRO_STATE_APPEAR 0
#define INTRO_STATE_WAIT_TOUCH 1
#define INTRO_STATE_PRESSED 2
#define INTRO_STATE_FLASH 3
#define INTRO_STATE_FADE 4
#define INTRO_STATE_LEAVE 5
#define INTRO_STATE_WAIT_NEXT 6
#define INTRO_STATE_DONE 7

struct IntroWork {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 state;
    /* 0x08 */ s32 timer;        /* frames in the current state */
    /* 0x0C */ u8 unk0C[8];
    /* 0x14 */ s16 touchId;
    /* 0x16 */ u8 unk16[2];
    /* 0x18 */ s32 frameA;       /* animation frames of the two icons */
    /* 0x1C */ s32 frameB;
    /* 0x20 */ s32 tick;         /* 0..59 */
};

struct IntroIconSize {
    s16 width;
    s16 height;
};

struct IntroIconRecord {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s16 x;
    /* 0x0A */ s16 y;
    /* 0x0C */ IntroIconSize *size;
};

extern "C" {
void eventQueueAddUnique(u32 event);
IntroIconRecord *asdTMTexTableEntryAt(u32 table, s32 index);
s32 ifTouchGetSelectionModeForRegion(s32 id);
s32 ifTouchRegionAdd(s32 x, s32 y, s32 height, s32 width);
void ifTouchRegionRemove(void);
void slotSetRequest(s32 slot, s32 frames, s32 value);

/* Moves the job to `state` and clears its counters. */
static __inline void introEnter(IntroWork *work, s32 state)
{
    work->frameA = 0;
    work->frameB = 0;
    work->state = state;
    work->timer = 0;
}

s32 FUN_00221310(u32 handle)
{
    IntroWork *work = reinterpret_cast<IntroWork *>(jobGetWork(handle));
    work->tick = (work->tick + 1) % 60;
    switch (work->state) {
    case INTRO_STATE_APPEAR:
        work->frameA++;
        work->frameB++;
        if (work->frameA >= 8) {
            work->timer++;
            work->frameA = 0;
            work->frameB = 0;
        }
        if (work->timer == 5) {
            introEnter(work, INTRO_STATE_WAIT_TOUCH);
            IntroIconRecord *icon = asdTMTexTableEntryAt(0x2D, 0x11);
            work->touchId = ifTouchRegionAdd((s16)(icon->x - 0x10), (s16)(icon->y - 0x10),
                                             (s16)(icon->size->height + 0x20), (s16)(icon->size->width + 0x20));
        }
        break;
    case INTRO_STATE_WAIT_TOUCH: {
        s32 mode = ifTouchGetSelectionModeForRegion(work->touchId);
        s32 a = work->frameA + 1;
        work->frameA = a % 15;
        work->frameB = (work->frameB + 1) % 60;
        if (mode == 2) {
            work->frameA = 0;
        } else if (mode == 6) {
            ifTouchRegionRemove();
            introEnter(work, INTRO_STATE_PRESSED);
            eventQueueAddUnique(0x10000CD);
        }
        break;
    }
    case INTRO_STATE_PRESSED:
        work->frameA++;
        if (work->frameA > 8)
            introEnter(work, INTRO_STATE_FLASH);
        break;
    case INTRO_STATE_FLASH:
        work->frameB++;
        if (work->frameB > 4) {
            work->frameA = (work->frameA + 1) % 4;
            work->frameB = 0;
        }
        work->timer++;
        if (work->timer > 0x5A)
            introEnter(work, INTRO_STATE_FADE);
        break;
    case INTRO_STATE_FADE:
        work->frameB++;
        if (work->frameB > 8)
            introEnter(work, INTRO_STATE_LEAVE);
        break;
    case INTRO_STATE_LEAVE:
        if (work->frameA < 8)
            work->frameA++;
        else
            work->frameB = (work->frameB + 1) % 12;
        work->timer++;
        if (work->timer > 0x38) {
            introEnter(work, INTRO_STATE_WAIT_NEXT);
            slotSetRequest(0, 0x1E, -1);
            slotSetRequest(1, 0x1E, -1);
        }
        break;
    case INTRO_STATE_WAIT_NEXT:
        if (FUN_002896bc() != 0) {
            work->timer++;
            if (work->timer > 10)
                introEnter(work, INTRO_STATE_DONE);
        }
        break;
    }
    return 0;
}

} /* extern "C" */
