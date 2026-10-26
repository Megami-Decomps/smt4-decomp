/* NON_MATCHING: recent-job searches are now compact for loops; retail's found path shares the final unk5EC test (moveq r0,#0 / movne r0,r6) and the transition argument loads are ordered differently. */
#include "event/bustupEvent/BustupCutAnim.h"

extern "C" {
extern BustupCutAnim *g_bustupCutAnim;
s32 jobIsValid(u32 job);
void FUN_00138954(u32 job, u32 mode, s32 duration, f32 x, f32 y);

// Move a bust-up job into a display slot and remember it in the recent-job list.
s32 FUN_0024ecc0(u32 job, s32 slot)
{
    BustupCutAnim *anim = g_bustupCutAnim;
    s32 result = 2;
    if (anim->slots[slot] != job) {
        for (s32 index = 0; index < BUSTUP_CUT_SLOTS; ++index) {
            if (anim->slots[index] == job) {
                anim->slots[index] = 0;
                result = 3;
            }
        }
        if (jobIsValid(anim->slots[slot])) {
            FUN_00138954(anim->slots[slot], anim->transition.mode,
                         static_cast<s32>(anim->transition.duration),
                         anim->transitionPosition.x, anim->transitionPosition.y);
            if (result != 3)
                result = 1;
        }
        anim->slots[slot] = job;
    }
    for (s32 index = 0; index < 10; ++index) {
        if (anim->recentJobs[index] == job) {
            if (anim->unk5EC == 5 || anim->unk5EC == 6)
                result = 0;
            return result;
        }
    }
    for (s32 index = 0; index < 10; ++index) {
        if (anim->recentJobs[index] == 0) {
            anim->recentJobs[index] = job;
            break;
        }
    }
    if (anim->unk5EC == 5 || anim->unk5EC == 6)
        result = 0;
    return result;
}
}
