/* NON_MATCHING: compiler lowers the active-state switch to conditional comparisons/stores; retail uses a four-entry jump table. Candidate O1/O2. */
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

// End child processes with the same delay, then move an active process into ending state.
extern "C" void asdProcessEnd(AsdProcess* process)
{
    AsdProcess* child = process->firstChild;
    while (child != NULL) {
        AsdProcess* next = child->nextSibling;
        child->endDelay = process->endDelay;
        asdProcessEnd(child);
        child = next;
    }
    switch (process->state) {
    case ASD_PROC_WAIT_START:
    case ASD_PROC_START_DELAY:
    case ASD_PROC_RUNNING:
        process->state = ASD_PROC_ENDING;
        break;
    default:
        break;
    }
}
