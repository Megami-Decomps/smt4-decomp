/* NON_MATCHING: the process name is a literal pool string in retail (reached with add r0, pc); the compiler puts it in .constdata. */
#include "AsdSDK/Source/Sys/Kernel/AsdSequence.h"

extern "C" {
extern AsdSequence g_asdSequence;

s32 asdSequenceUpdate(u32 handle);
u32 asdProcessCreateSimple(const s8 *name, s32 group, u16 startDelay, u16 endDelay, AsdProcUpdateFunc onUpdate, AsdProcFunc onEnd, void *owner);

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
