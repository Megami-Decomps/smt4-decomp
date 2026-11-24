#include "shard/W6_W6Match2_JobBlend.h"
#include "script/ScriptArgs.h"

/* Starts a fade from full opacity over the given number of frames, or clears it immediately. */
extern "C" u32 scrCommJobStartAlphaFadeOut(void)
{
    u32 job = scrGetArg(0);
    s32 frames = scrGetArg(1);
    AlphaFadeJob *work = (AlphaFadeJob *)jobGetWork(job);
    alphaFadeOut(work->fade.alpha, work->fade.step, frames);
    return 1;
}
