/* NON_MATCHING: the retail build has a stripped debug call (file/line setup + nop) before the argument allocation. */
#include "AsdSDK/Source/Sys/Kernel/AsdSequence.h"

extern "C" {
extern AsdSequence g_asdSequence;

void *asdMemAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);
void rt_memcpy(void *dst, const void *src, u32 size);

/* Requests a switch to `state`, with a copy of `size` bytes of `arg` (if any) for its enter
 * callback, and tells the current state to exit. */
void asdSequenceRequest(s32 state, const void *arg, u32 size)
{
    if (g_asdSequence.states[state].enter == NULL) {
        return;
    }
    g_asdSequence.next = state;
    if (arg != NULL) {
        g_asdSequence.nextArg = asdMemAlloc(0x100, 0x100, 0, size, 1);
        g_asdSequence.nextArgSize = size;
        rt_memcpy(g_asdSequence.nextArg, arg, size);
    } else {
        g_asdSequence.nextArg = NULL;
        g_asdSequence.nextArgSize = 0;
    }
    if (g_asdSequence.current >= 0) {
        g_asdSequence.states[g_asdSequence.current].exit();
    }
}

} /* extern "C" */
