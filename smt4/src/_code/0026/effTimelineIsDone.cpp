#include "common.h"

extern "C" {

typedef struct Timeline {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ f32 time;
    /* 0x3C */ u8 unk3C[0xC];
    /* 0x48 */ f32 end;
} Timeline;

typedef struct Effect {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ Timeline *timeline;
} Effect;

/* 1 when there is no timeline or it has reached its end. */
u32 effTimelineIsDone(Effect *effect)
{
    Timeline *timeline = effect->timeline;
    u32 done;

    if ((timeline == NULL) || (done = 0, timeline->time >= timeline->end)) {
        done = 1;
    }
    return done;
}

} /* extern "C" */
