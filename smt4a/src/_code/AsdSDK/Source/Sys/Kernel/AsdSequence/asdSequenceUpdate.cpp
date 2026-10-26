/* NON_MATCHING: only the zero for `next = 0` is a fresh `mov r1,#0` in retail where armcc reuses r5. */
#include "AsdSDK/Source/Sys/Kernel/AsdSequence.h"

extern "C" {
extern AsdSequence g_asdSequence;

void asdMemFree(void *block);
/* The sequence's process callback: runs the current state's update and the idle state's, then
 * performs a pending transition (or falls back to the idle state). Always returns 0. */
s32 asdSequenceUpdate(u32 handle)
{
    AsdSequence *seq = &g_asdSequence;
    if ((seq->current < 0 || seq->states[seq->current].update() == 0) &&
        seq->states[0].update() == 0) {
        if (seq->next != -1) {
            seq->states[seq->next].enter(seq->nextArg, seq->nextArgSize);
            seq->current = seq->next;
            if (seq->nextArg != NULL) {
                asdMemFree(seq->nextArg);
            }
            seq->nextArg = NULL;
            seq->next = -1;
            seq->nextArgSize = 0;
            return 0;
        }
        seq->current = -1;
        if (g_asdSequence.states[0].enter != NULL) {
            g_asdSequence.next = 0;
            g_asdSequence.nextArg = NULL;
            g_asdSequence.nextArgSize = 0;
        }
    }
    return 0;
}

} /* extern "C" */
