#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

extern "C" {

extern AsdProcessState g_asdProcess;

/* Pauses every pausable process, in every group. */
void asdProcessPauseAll(void)
{
    s32 count = g_asdProcess.groupCount;

    for (s32 i = 0; count > i; i++) {
        for (AsdProcess *process = g_asdProcess.groups[i].head; process != NULL; process = process->next) {
            if ((process->flags & ASD_PROC_FLAG_PAUSABLE) != 0) {
                process->flags |= ASD_PROC_FLAG_PAUSED;
            }
        }
    }
}

} /* extern "C" */
