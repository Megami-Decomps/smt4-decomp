#include "event/eventCommand.h"

extern "C" {

s32 eventCommandGetPendingCleanup(void);
s32 jobIsValid(u32 job);
void FUN_0024dc64(void);
void eventCommandSetPendingCleanup(s32 arg);
void asdMemoryFreeLockedAlt(void);
void textureCacheReleaseAll(void);
void jobStop(u32 job, s32 arg);

extern EventCommandGlobals g_eventCommand;

/* Ends the event command: runs the two clean-ups when eventCommandGetPendingCleanup asks for them, then stops the
 * extra job if it is running. */
s32 eventCommandEnd(void)
{
    if (eventCommandGetPendingCleanup() != 0) {
        asdMemoryFreeLockedAlt();
        eventCommandSetPendingCleanup(0);
    }
    if (jobIsValid(g_eventCommand.job) != 0) {
        textureCacheReleaseAll();
        FUN_0024dc64();
        jobStop(g_eventCommand.job, 0);
    }
    return 1;
}

} /* extern "C" */
