/* NON_MATCHING: retail uses ldr r0, [r0, #4] where the compiled block uses ldr r1, [r0, #4]. */
#include "common.h"

struct ProgressState {
    u8 unk00[8];  // 0x00
    u32 phase;    // 0x08
};

struct ProgressContext {
    u8 unk00[4];           // 0x00
    ProgressState* state;  // 0x04
};

extern "C" void FUN_0022258c(s32 value);

extern "C" s32 FUN_0025c7e4(ProgressContext* context)
{
    ProgressState* state = context->state;
    u32 phase = state->phase;

    if (phase == 0 || phase == 1) {
        state->phase = phase + 1;
    } else if (phase == 2) {
        FUN_0022258c(0);
        return -1;
    }

    return 0;
}
