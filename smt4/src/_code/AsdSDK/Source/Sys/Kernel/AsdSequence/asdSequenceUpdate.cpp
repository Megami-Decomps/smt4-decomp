#include "AsdSDK/Source/Sys/Kernel/AsdSequence.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"

extern "C" {
extern AsdSequence g_asdSequence;
extern const char g_asdSequenceSourcePath[]; /* __FILE__ of AsdSequence.cpp */
void rt_memcpy(void *dst, const void *src, u32 size);

void asdMemFree(void *block);
/* asdSequenceRequest, which armcc inlined here from the same file. */
static __inline void requestState(s32 state, const void *arg, u32 size)
{
    AsdSequence *seq = &g_asdSequence;

    if (seq->states[state].enter == NULL) {
        return;
    }
    seq->next = state;
    if (arg != NULL) {
        asdDebugTrace(g_asdSequenceSourcePath, 132);
        seq->nextArg = asdMemAlloc(0x100, 0x100, 0, size, 1);
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
        requestState(0, NULL, 0);
    }
    return 0;
}

} /* extern "C" */
