/* NON_MATCHING: retail reaches the locked/alternate bytes through a second anchor pointer (job + 0x1400, offsets 0x8c/0x94) and loads the target through a literal-pool offset; this build adds the offsets separately */
#include "common.h"

extern "C" {

typedef struct JobState {
    /* 0x00 */ u8 unk00[0xA4];
    /* 0xA4 */ u8 active;
    /* 0xA5 */ u8 ready;
    /* 0xA6 */ u8 unkA6[7];
    /* 0xAD */ u8 armed;
} JobState;

typedef struct JobWork {
    /* 0x0000 */ u8 unk0000[0xF00];
    /* 0x0F00 */ JobState state;
    /* 0x0FAE */ u8 unk0fae[0x4DE];
    /* 0x148C */ u8 locked;
    /* 0x148D */ u8 unk148d[3];
    /* 0x1490 */ s32 target;
    /* 0x1494 */ u8 alternate;
} JobWork;

extern JobWork *jobGetWork(void);
extern void FUN_001509fc(s32 arg);
extern void FUN_001537b0(void);

/* Per-frame check: when the job is active, ready and armed and has a target that is not locked, runs FUN_001537b0 (or FUN_001509fc(1) without the alternate flag); returns 0. */
u32 FUN_0013c660(void)
{
    JobWork *job = jobGetWork();
    JobState *state = &job->state;

    if (state->active != 0 && state->ready != 0 && state->armed != 0 && job->target != 0 && job->locked == 0) {
        if (job->alternate != 0) {
            FUN_001537b0();
        } else {
            FUN_001509fc(1);
        }
    }
    return 0;
}

} /* extern "C" */
