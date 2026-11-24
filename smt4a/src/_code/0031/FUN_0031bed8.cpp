#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "script/ScriptArgs.h"
#include "shard/W6_W6Match2_JobBlend.h"

extern "C" {

/* Limits step counts to 4 during fast-forward. */
static __inline s32 limitSteps(s32 steps)
{
    if (inputFastForwardActive() != 0 && steps > 4) {
        steps = 4;
    }
    return steps;
}

/* Starts a job's fade from full opacity, respecting fast-forward. */
u32 FUN_0031bed8(void)
{
    u32 job = scrGetArg(0);
    s32 steps = limitSteps(scrGetArg(1));
    AlphaFadeJob *work = (AlphaFadeJob *)jobGetWork(job);
    alphaFadeOut(work->fade.alpha, work->fade.step, steps);
    return 1;
}

} /* extern "C" */
