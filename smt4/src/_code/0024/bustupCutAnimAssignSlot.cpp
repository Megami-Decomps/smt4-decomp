#include "event/bustupEvent/BustupCutAnim.h"

extern "C" {
extern BustupCutAnim *g_bustupCutAnim;
s32 jobIsValid(u32 job);
void bustupCutAnimStartMove(u32 job, u32 mode, s32 duration, f32 x, f32 y);

// Remember a job in the first free history entry unless it is already recorded.
static __inline void rememberRecentJob(BustupCutAnim *anim, u32 job)
{
    for (s32 index = 0; index < 10; ++index) {
        if (anim->recentJobs[index] == job)
            return;
    }
    for (s32 index = 0; index < 10; ++index) {
        if (anim->recentJobs[index] == 0) {
            anim->recentJobs[index] = job;
            return;
        }
    }
}

// Move a bust-up job into its display slot and remember it in the recent-job list.
s32 bustupCutAnimAssignSlot(u32 job, s32 slot)
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
            u32 previous = anim->slots[slot];
            bustupCutAnimStartMove(previous, anim->transition.mode, (s32)anim->transition.duration,
                         anim->transitionPosition.x, anim->transitionPosition.y);
            if (result != 3)
                result = 1;
        }
        anim->slots[slot] = job;
    }
    rememberRecentJob(anim, job);
    if (anim->unk5EC == 5 || anim->unk5EC == 6)
        return 0;
    return result;
}
}
