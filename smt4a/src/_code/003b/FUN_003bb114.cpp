/* NON_MATCHING: register numbering only: retail assigns r4, r7, r6, r5 to the three script arguments and the job work word; the build numbers them r7, r6, r5, r4. */
#include "common.h"

extern "C" {

u32 scrGetArg(u32 index);
u32 *jobGetWork(u32 job);
void FUN_0038791c(u32 job, u32 first, s32 mode, u32 second, s32 flagA, s32 flagB);
void bustupCutStartSlotTransition(u32 work, u32 slot, s32 flagA, s32 flagB, u32 value);

/* Script command: starts the bust-up slot transition for the job given by argument 0. */
u32 FUN_003bb114(void)
{
    u32 job = scrGetArg(0);
    u32 first = scrGetArg(1);
    u32 slot = scrGetArg(2);
    u32 work = *jobGetWork(job);

    FUN_0038791c(job, first, 2, slot, 1, 1);
    bustupCutStartSlotTransition(work, slot, 1, 1, 0xffffffff);
    return 1;
}

} /* extern "C" */
