/* NON_MATCHING: Retail ldr r2, [pc, #140] differs from recovered ldrb r2, [r4, #476]. */
#include "common.h"

namespace {

struct Float4View {
    f32 components[4];
};

struct UpdateStateView {
    u8 unk00[0x52C];             // +0x0000
    u32 unk52C;                 // +0x052C
    u8 unk530[0xC9C];           // +0x0530
    Float4View unk11CC;         // +0x11CC
    u8 unk11DC;                 // +0x11DC
};

}

extern "C" s32 FUN_002b634c(u32 handle, f32* values);

// Forward changed or forced four-float values, then clear the force-update flag.
extern "C" void FUN_00343778(UpdateStateView* state, const Float4View* values)
{
    if (state->unk11DC != 0 ||
        values->components[0] != state->unk11CC.components[0] ||
        values->components[1] != state->unk11CC.components[1] ||
        values->components[2] != state->unk11CC.components[2] ||
        values->components[3] != state->unk11CC.components[3]) {
        state->unk11CC = *values;
        FUN_002b634c(state->unk52C, state->unk11CC.components);
    }
    state->unk11DC = 0;
}
