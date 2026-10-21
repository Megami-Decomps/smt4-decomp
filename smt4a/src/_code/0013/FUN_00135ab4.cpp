/* NON_MATCHING: retail uses push {r2, r3, r4, lr} where the compiled block uses push {r0, r1, r2, r3, r4, lr}. */
#include "common.h"

struct ValueState {
    u32 value; // 0x00
    u32 unk04; // 0x04
};

extern "C" void FUN_0012e338(ValueState* state);

extern "C" void FUN_00135ab4(u32* output, u32 unused, ValueState state)
{
    FUN_0012e338(&state);
    *output = state.value;
}
