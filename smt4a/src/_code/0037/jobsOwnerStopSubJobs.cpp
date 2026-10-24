#include "event/bustupEvent/BustupCutAnim.h"

extern "C" {

extern s32 jobIsValid(u32 job);
extern void FUN_00164ce0(u32 job, u8 value);
extern BustupCutAnimA *g_bustupCutAnim;

/* Stops the bust-up cut animation's sub-jobs 1..3 that are still valid. */
u32 jobsOwnerStopSubJobs(void)
{
    BustupCutAnimA *anim = g_bustupCutAnim;
    s32 i;

    if (anim != NULL) {
        for (i = 1; i < BUSTUP_CUT_SLOTS; i++) {
            if (jobIsValid(anim->slots[i]) != 0) {
                FUN_00164ce0(anim->slots[i], 0);
            }
        }
    }
    return 1;
}

} /* extern "C" */
