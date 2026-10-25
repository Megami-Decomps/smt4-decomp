#include "common.h"

extern "C" {

struct JobPromptWork {
    /* 0x000 */ u8 unk000[0xe8c];
    /* 0xe8c */ s8 active;
    /* 0xe8d */ s8 ready;
    /* 0xe8e */ u8 unke8e[7];
    /* 0xe95 */ s8 hasTarget;
    /* 0xe96 */ u8 unke96[0xfd8 - 0xe96];
    /* 0xfd8 */ s8 blocked;
    /* 0xfd9 */ u8 unkfd9[3];
    /* 0xfdc */ s32 target;
    /* 0xfe0 */ s8 confirm;
};

JobPromptWork *jobGetWork(void);
void FUN_00117a70(s32 arg);
void FUN_001192c8(s32 arg);

/* Job step: when the prompt is active and ready with a target and not blocked, confirms or cancels it. */
u32 FUN_001080c0(void)
{
    JobPromptWork *work = jobGetWork();

    if (work->active && work->ready && work->hasTarget && work->target != 0 && !work->blocked) {
        if (work->confirm) {
            FUN_001192c8(1);
        } else {
            FUN_00117a70(1);
        }
    }
    return 0;
}

} /* extern "C" */
