/* NON_MATCHING: retail forms state+0x400 once for the halfword clear (add r2,r1,#1024; strh [r2,#188]) and keeps zero in r3; the build addresses it through a pool-literal offset register. */
#include "ui/ButtonHelpGlobal.h"
#include <string.h>

extern "C" {
void FUN_002ae028(u8 *flags);

/* Suspends (nonzero) or resumes the touch update; suspending clears the slots' touch flags. */
void buttonHelpSetEnabled(s32 enabled)
{
    ButtonHelpWork *work = g_buttonHelp.work;
    work->touchSuspended = (u8)enabled;
    if (enabled != 0) {
        memset(work->touchPressed, 0, sizeof(work->touchPressed));
        FUN_002ae028(work->touchSelected);
    }
}
}
