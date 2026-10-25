/* NON_MATCHING: constant and global state stores are scheduled differently; process-name literal now matches. */
#include "AsdSDK/Source/Sys/Kernel/AsdSequence.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

extern "C" {
extern AsdSequence g_asdSequence;

s32 asdSequenceUpdate(u32 handle);

/* Starts a sequence over `states` (`stateCount` of them) as a process in `group`. */
void asdSequenceStart(s32 group, AsdSeqState *states, u32 stateCount)
{
    g_asdSequence.current = -1;
    g_asdSequence.nextArg = NULL;
    g_asdSequence.next = -1;
    g_asdSequence.stateCount = stateCount;
    g_asdSequence.nextArgSize = 0;
    g_asdSequence.states = states;
    asdProcessCreateSimple((const s8 *)"AsdSequence", group, 0, 0, asdSequenceUpdate, NULL, NULL);
}

} /* extern "C" */
