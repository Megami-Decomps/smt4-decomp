/* NON_MATCHING: armcc allocates a zero register and schedules transition callbacks and state stores differently. */
#include "AsdSDK/Source/Sys/Kernel/AsdSequence.h"

extern "C" {
extern AsdSequence g_asdSequence;

void asdMemFree(void *block);
/* The sequence's process callback: runs the current state's update and the idle state's, then
 * performs a pending transition (or falls back to the idle state). Always returns 0. */
s32 asdSequenceUpdate(u32 handle)
{
    if ((g_asdSequence.current < 0 || g_asdSequence.states[g_asdSequence.current].update() == 0) &&
        g_asdSequence.states[0].update() == 0) {
        if (g_asdSequence.next != -1) {
            g_asdSequence.states[g_asdSequence.next].enter(g_asdSequence.nextArg, g_asdSequence.nextArgSize);
            g_asdSequence.current = g_asdSequence.next;
            if (g_asdSequence.nextArg != NULL) {
                asdMemFree(g_asdSequence.nextArg);
            }
            g_asdSequence.nextArg = NULL;
            g_asdSequence.next = -1;
            g_asdSequence.nextArgSize = 0;
            return 0;
        }
        g_asdSequence.current = -1;
        if (g_asdSequence.states[0].enter != NULL) {
            g_asdSequence.next = 0;
            g_asdSequence.nextArg = NULL;
            g_asdSequence.nextArgSize = 0;
        }
    }
    return 0;
}

} /* extern "C" */
