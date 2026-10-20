#include "event/eventCommand.h"

extern "C" {

s32 FUN_002580b4(void);
s32 jobIsValid(u32 job);
void FUN_0024dc64(void);
void FUN_0024dcec(s32 arg);
void FUN_0024dcfc(void);
void FUN_00262a38(void);
void jobStop(u32 job, s32 arg);

extern EventCommandGlobals g_eventCommand;

/* Ends the event command: runs the two clean-ups when FUN_002580b4 asks for them, then stops the
 * extra job if it is running. */
s32 eventCommandEnd(void)
{
    if (FUN_002580b4() != 0) {
        FUN_0024dcfc();
        FUN_0024dcec(0);
    }
    if (jobIsValid(g_eventCommand.job) != 0) {
        FUN_00262a38();
        FUN_0024dc64();
        jobStop(g_eventCommand.job, 0);
    }
    return 1;
}

} /* extern "C" */
