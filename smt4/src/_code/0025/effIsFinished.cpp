#include "common.h"

extern "C" {

typedef struct Timeline {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ f32 time;
    /* 0x3C */ u8 unk3C[0xC];
    /* 0x48 */ f32 end;
} Timeline;

typedef struct Effect {
    /* 0x00 */ u32 flags;
    /* 0x04 */ u8 unk04[0x30];
    /* 0x34 */ s32 count;
    /* 0x38 */ u8 unk38[0x14];
    /* 0x4C */ Timeline *timeline;
} Effect;

/* 1 when the effect is finished: no count left, no timeline, or (unless looping) the timeline has reached its end. */
u32 effIsFinished(Effect *effect)
{
    Timeline *timeline;

    if ((0 >= effect->count) || (timeline = effect->timeline, timeline == NULL) ||
        (((effect->flags & 1) == 0) && (timeline->time >= timeline->end))) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
