/* NON_MATCHING: right/left job, animation, and slot saved-register allocation differs. */
#include "common.h"
#include "script/ScriptArgs.h"

extern "C" {
void FUN_00249c4c(u32 job, s32 position, s32 animate);
void bustupConfigureSlotTransition(u32 job, s32 position, s32 mode, u32 animation, u32 option, u32 value);
s32 bustupCutAnimFindSlot(u32 job);

// Place a pair of bustups, animating the one that changes an occupied slot.
u32 FUN_00328dec(void)
{
    u32 rightJob = scrGetArg(0);
    u32 leftJob = scrGetArg(1);
    u32 animation = scrGetArg(2);
    u32 animationOption = scrGetArg(3);
    u32 animationValue = scrGetArg(4);
    s32 rightSlot = bustupCutAnimFindSlot(rightJob);
    s32 leftSlot = bustupCutAnimFindSlot(leftJob);
    if ((rightSlot < 0 && leftSlot < 0) || (rightSlot > 0 && leftSlot > 0)) {
        FUN_00249c4c(rightJob, 2, 0);
        FUN_00249c4c(leftJob, 1, 0);
    } else if (rightSlot > 0) {
        FUN_00249c4c(rightJob, 2, 0);
        bustupConfigureSlotTransition(leftJob, 1, 3, animation, animationOption, animationValue);
    } else {
        FUN_00249c4c(leftJob, 1, 0);
        bustupConfigureSlotTransition(rightJob, 2, 3, animation, animationOption, animationValue);
    }
    return 1;
}
}
