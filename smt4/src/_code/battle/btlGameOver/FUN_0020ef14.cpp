/* NON_MATCHING: The recovered state and job pointers use opposite registers across the dispatch. */
#include "battle/btlGameOver.h"

extern "C" {
extern BtlGameOver* g_btlGameOver;
BtlGameOverJobWork* jobGetWork(void);
s32 asdProcessGetFrames(u32);
s32 FUN_00335950(BtlGameOver*);

// Advances the game-over timer and runs its state machine when the job can update.
s32 FUN_0020ef14(void)
{
    BtlGameOverJobWork* work = jobGetWork();
    BtlGameOver* state = g_btlGameOver;
    if (state == NULL) {
        return 0;
    }
    ++state->frameCounter;
    if (state->frameCounter >= 0x10000) {
        state->frameCounter = 0xFFFF;
    }
    if (work->mode == 2 && (work->flags & 0x400040000ULL) == 0) {
        return FUN_00335950(state);
    }
    if (asdProcessGetFrames(work->job) != 0) {
        return -1;
    }
    return 0;
}
}
