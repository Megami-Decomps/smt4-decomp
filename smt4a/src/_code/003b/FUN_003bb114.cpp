/* NON_MATCHING: retail assigns r4, r7, r6, r5 to the arguments and resolved child job;
 * the build uses r7, r6, r5, r4 and stages the work pointer before the load. */
#include "event/bustupEvent/BustupSlotControl.h"
#include "event/bustupEvent/BustupSlotControl_BustupCutAnim.h"
#include "script/ScriptArgs.h"
#include "shard/JobWork.h"
#include "ui/SpriteTransition.h"

/* Starts the bust-up transition for the job selected by the script. */
extern "C" s32 FUN_003bb114(void)
{
    enum { BUSTUP_TRANSITION_FRAME = 2, BUSTUP_TRANSITION_DEFAULT = -1 };
    u32 job = scrGetArg(0);
    s32 portrait = scrGetArg(1);
    s32 frame = scrGetArg(2);
    s32 workId = ((SpriteTransitionWork *)jobGetWork(job))->job;

    bustupConfigureSlotTransition(job, portrait, BUSTUP_TRANSITION_FRAME, frame, 1, 1);
    bustupCutStartSlotTransition(workId, frame, 1, 1, BUSTUP_TRANSITION_DEFAULT);
    return 1;
}
