#include "event/eventCommand.h"

extern "C" {

s32 FUN_00203a5c(void);
s32 jobIsValid(u32 job);
void FUN_0035bbc4(void);
void FUN_00203a6c(s32 arg);
void FUN_003d8f20(void);
void FUN_0035bb70(void);
void jobStop(u32 job, s32 arg);

extern EventCommandGlobals g_eventCommand;

/* Ends the event command: runs the two clean-ups when FUN_00203a5c asks for them, then stops the
 * extra job if it is running. */
s32 eventCommandEnd(void)
{
    if (FUN_00203a5c() != 0) {
        FUN_003d8f20();
        FUN_00203a6c(0);
    }
    if (jobIsValid(g_eventCommand.job) != 0) {
        FUN_0035bb70();
        FUN_0035bbc4();
        jobStop(g_eventCommand.job, 0);
    }
    return 1;
}

} /* extern "C" */
