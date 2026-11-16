/* NON_MATCHING: block layout now matches; retail keeps the state in r1 and the job work in r0 (materialising the NULL result with moveq), and returns asdProcessGetFrames' -1 directly where this build goes through r4. */
#include "battle/btlGameOver.h"
#include "shard/JobWork.h"

extern "C" {
extern BtlGameOver* g_btlGameOver;
s32 asdProcessGetFrames(u32);
s32 FUN_00335950(BtlGameOver*);

// Advances the game-over timer and runs its state machine when the job can update.
s32 btlGameOverJobUpdate(u32 job)
{
    BtlGameOverJobWork* work = (BtlGameOverJobWork *)jobGetWork(job);
    BtlGameOver* state = g_btlGameOver;
    s32 result = 0;
    if (state != NULL) {
        ++state->frameCounter;
        if (state->frameCounter >= 0x10000) {
            state->frameCounter = 0xFFFF;
        }
        if (work->mode == 2 && (work->flags & 0x400040000ULL) == 0) {
            return FUN_00335950(state);
        }
        if (asdProcessGetFrames(work->job) != 0) {
            result = -1;
        }
    }
    return result;
}
}
