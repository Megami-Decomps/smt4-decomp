/* NON_MATCHING: corrected global resident work lookup; phase/work pointer use swapped registers. */
#include "kernel/jyoucyu.h"

struct ProgressState : JyoucyuWork {
    /* 0x08 */ u32 phase;
};

extern "C" void FUN_0022258c(s32 value);
extern "C" JyoucyuGlobals g_jyoucyu;

extern "C" s32 FUN_0025c7e4(void)
{
    ProgressState* state = static_cast<ProgressState *>(g_jyoucyu.work);
    u32 phase = state->phase;

    if (phase == 0 || phase == 1) {
        state->phase = phase + 1;
    } else if (phase == 2) {
        FUN_0022258c(0);
        return -1;
    }

    return 0;
}
