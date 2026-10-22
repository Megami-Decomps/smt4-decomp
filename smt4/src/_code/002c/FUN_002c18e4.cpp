/* NON_MATCHING: Retail ldr r2, [pc, #156] differs from recovered ldrb r1, [r4, #476]. */
#include "common.h"

namespace {

struct ResetStateView {
    u8 unk0000[0x52c]; // 0x0000
    u32 unk052C;       // 0x052c
    u8 unk0530[0xc9c]; // 0x0530
    f32 unk11CC[4];    // 0x11cc
    u8 unk11DC;        // 0x11dc
};

} // namespace

extern "C" s32 FUN_002b634c(u32 target, const f32* values);

// Restore the four values to unity when needed, notify the target, and clear the flag.
extern "C" void FUN_002c18e4(ResetStateView* state)
{
    if (state->unk11DC != 0 ||
        state->unk11CC[0] != 1.0f ||
        state->unk11CC[1] != 1.0f ||
        state->unk11CC[2] != 1.0f ||
        state->unk11CC[3] != 1.0f) {
        state->unk11CC[0] = 1.0f;
        state->unk11CC[1] = 1.0f;
        state->unk11CC[2] = 1.0f;
        state->unk11CC[3] = 1.0f;
        FUN_002b634c(state->unk052C, state->unk11CC);
    }
    state->unk11DC = 0;
}
