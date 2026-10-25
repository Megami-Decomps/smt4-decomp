#include "AsdSDK/Source/Sys/Kernel/AsdSequence.h"
#include "AsdSDK/AsdDebug.h"
#include "shard/W6_W6Match2_EntrySequence.h"

extern "C" {
extern AsdSequence g_asdSequence;
extern const char g_asdSequenceSourcePath[]; /* __FILE__ of AsdSequence.cpp */

void *asdMemoryAllocTracked(int heap, int alignClass, int unk08, u32 size, int fromFront);
void rt_memcpy(void *dst, const void *src, u32 size);

/* Requests a switch to `state`, with a copy of `size` bytes of `arg` (if any) for its enter
 * callback, and tells the current state to exit. */
void asdSequenceRequest(s32 state, const void *arg, u32 size)
{
    AsdSequence *seq = &g_asdSequence;

    if (seq->states[state].enter == NULL) {
        return;
    }
    seq->next = state;
    if (arg != NULL) {
        asdDebugTrace(g_asdSequenceSourcePath, 132);
        seq->nextArg = asdMemoryAllocTracked(0x100, 0x100, 0, size, 1);
        seq->nextArgSize = size;
        rt_memcpy(seq->nextArg, arg, size);
    } else {
        seq->nextArg = NULL;
        seq->nextArgSize = 0;
    }
    if (seq->current >= 0) {
        seq->states[seq->current].exit();
    }
}

} /* extern "C" */
