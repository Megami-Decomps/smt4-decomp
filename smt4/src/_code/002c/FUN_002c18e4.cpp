/* NON_MATCHING: retail reads the flag byte through a literal offset (ldr r2,=0x11dc; ldrb r0,[r2,r0]) and keeps each comparison unpredicated; the build predicates the compares */
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

static bool floatsEqual(f32 first, f32 second)
{
    return first == second;
}

// Restore the four values to unity when needed, notify the target, and clear the flag.
extern "C" void FUN_002c18e4(ResetStateView* state)
{
    f32 one = 1.0f;

    if (state->unk11DC != 0 ||
        !floatsEqual(state->unk11CC[0], one) ||
        !floatsEqual(state->unk11CC[1], one) ||
        !floatsEqual(state->unk11CC[2], one) ||
        !floatsEqual(state->unk11CC[3], one)) {
        state->unk11CC[0] = one;
        state->unk11CC[1] = one;
        state->unk11CC[2] = one;
        state->unk11CC[3] = one;
        FUN_002b634c(state->unk052C, state->unk11CC);
    }
    state->unk11DC = 0;
}
