/* NON_MATCHING: register numbering only: retail assigns r4, r7, r6, r5 to the three script arguments and the job work word; the build numbers them r7, r6, r5, r4. */
#include "ui/SpriteTransition.h"
#include "event/bustupEvent/BustupSlotControl_BustupCutAnim.h"

extern "C" {

u32 scrGetArg(u32 index);
SpriteTransitionWork *jobGetWork(u32 job);
void bustupConfigureSlotTransition(u32 job, u32 first, s32 mode, u32 second, u32 flagA, u32 flagB);

/* Script command: starts the bust-up slot transition for the job given by argument 0. */
u32 FUN_003bb114(void)
{
    u32 job = scrGetArg(0);
    u32 first = scrGetArg(1);
    u32 slot = scrGetArg(2);
    u32 work = jobGetWork(job)->job;

    bustupConfigureSlotTransition(job, first, 2, slot, 1, 1);
    bustupCutStartSlotTransition(work, slot, 1, 1, 0xffffffff);
    return 1;
}

} /* extern "C" */
