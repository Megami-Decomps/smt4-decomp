#include "code/Code0020.h"
#include "script/ScriptArgs.h"
#include "shard/W6_W6Match2_JobBlend.h"

extern "C" {

/* Script command: sets the job's fade to run over `steps` steps (at most 4 when the check passes), or clears it for 0. */
s32 FUN_0031c080(void)
{
    s32 job = scrGetArg(0);
    s32 steps = scrGetArg(1);

    if (inputFastForwardActive() != 0 && steps > 4) {
        steps = 4;
    }
    ShortAlphaFadeJob *work = (ShortAlphaFadeJob *)jobGetWork(job);
    if (work != NULL) {
        alphaFadeOut(work->fade.alpha, work->fade.step, steps);
    }
    return 1;
}

} /* extern "C" */
