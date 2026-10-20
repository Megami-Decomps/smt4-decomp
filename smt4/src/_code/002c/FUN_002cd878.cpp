#include "common.h"

extern "C" {

typedef struct JobRef {
    /* 0x0 */ u32 job;
} JobRef;

typedef struct Fade {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 unk08;
    /* 0x0C */ s32 unk0C;
    /* 0x10 */ f32 unk10;
    /* 0x14 */ s32 unk14;
} Fade;

typedef struct CommonBgView {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ Fade *fade;
    /* 0x8 */ JobRef *jobRef;
} CommonBgView;

extern CommonBgView g_commonBg;

s32 jobIsValid(u32 job);
s32 jobStop(u32 job, s32 arg);

/* Stops the background job if it is still running and resets the fade state. */
void FUN_002cd878(void)
{
    Fade *fade = g_commonBg.fade;

    if (g_commonBg.jobRef != NULL && jobIsValid(g_commonBg.jobRef->job) != 0) {
        jobStop(g_commonBg.jobRef->job, 0);
    }
    fade->unk08 = 0;
    fade->unk0C = 1;
    fade->unk10 = 0.0f;
    fade->unk14 = 0;
}

} /* extern "C" */
