#include "event/eventCommand.h"

extern "C" {

s32 jobIsValid(u32 job);
void jobStop(u32 job, s32 arg);

extern EventCommandGlobals g_eventCommand;

/* Stops the command's job if it is still running. */
s32 eventCommandStopJob(void)
{
    if (g_eventCommand.command != NULL && jobIsValid(g_eventCommand.command->job) != 0) {
        jobStop(g_eventCommand.command->job, 0);
    }
    return 1;
}

} /* extern "C" */
