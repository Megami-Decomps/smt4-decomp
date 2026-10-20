#include "common.h"

extern "C" {

typedef struct CommonBgState {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 mode;
    /* 0x0C */ s32 unk0c;
    /* 0x10 */ f32 progress;
    /* 0x14 */ s32 unk14;
} CommonBgState;

typedef struct CommonBg {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ CommonBgState *state;
    /* 0x08 */ u32 *job;
} CommonBg;

extern CommonBg g_commonBg;

extern s32 jobIsValid(u32 job);
extern void jobStop(u32 job, s32 arg);

/* Stops the background job when it is still valid and resets the state to mode 3. */
void commonBgReset(void)
{
    CommonBgState *state = g_commonBg.state;

    if (g_commonBg.job != NULL && jobIsValid(*g_commonBg.job) != 0) {
        jobStop(*g_commonBg.job, 0);
    }
    state->unk0c = 0;
    state->mode = 3;
    state->progress = 0.0f;
    state->unk14 = 0;
}

} /* extern "C" */
