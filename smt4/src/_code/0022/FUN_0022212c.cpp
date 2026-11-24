/* Script command: sets up a countdown fade on a job — full strength and a per-frame decrement of 1 / frames, or both
 * zero when the frame count is 0. Arguments: job id, frame count. Always returns 1. */
#include "shard/W6_W6Match2_JobBlend.h"
#include "script/ScriptArgs.h"

extern "C" {

s32 FUN_0022212c(void)
{
    s32 jobId = scrGetArg(0);
    s32 frames = scrGetArg(1);
    ShortAlphaFadeJob *work = (ShortAlphaFadeJob *)jobGetWork(jobId);

    if (work != NULL) {
        alphaFadeOut(work->fade.alpha, work->fade.step, frames);
    }
    return 1;
}

} /* extern "C" */
