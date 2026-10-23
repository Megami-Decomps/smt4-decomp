/* NON_MATCHING: recent-job search unrolling, transition-argument load order and final result selection differ. */
#include "event/bustupEvent/BustupCutAnim.h"

extern "C" {
extern BustupCutAnimA *g_bustupCutAnim;
s32 jobIsValid(u32 job);
void FUN_00185830(u32 job, u32 mode, s32 duration, f32 x, f32 y);

// Move a portrait job into its display slot and remember it in the active history.
s32 FUN_003ae9d8(u32 job, s32 slot)
{
    BustupCutAnimA *state = g_bustupCutAnim;
    s32 result = 2;
    if (state->slots[slot] != job) {
        for (s32 index = 0; index < BUSTUP_CUT_SLOTS; ++index) {
            if (state->slots[index] == job) {
                state->slots[index] = 0;
                result = 3;
            }
        }
        if (jobIsValid(state->slots[slot])) {
            FUN_00185830(state->slots[slot], state->transition.mode, (s32)state->transition.duration,
                         state->transitionPosition.x, state->transitionPosition.y);
            if (result != 3)
                result = 1;
        }
        state->slots[slot] = job;
    }
    s32 index = 0;
    for (; index < 10; ++index) {
        if (state->recentJobs[index] == job)
            break;
    }
    if (index == 10) {
        for (index = 0; index < 10; ++index) {
            if (state->recentJobs[index] == 0) {
                state->recentJobs[index] = job;
                break;
            }
        }
    }
    if (state->unk5F0 == 5 || state->unk5F0 == 6)
        result = 0;
    return result;
}
}
