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
    s8 unk11DC;                 // +0x11DC: forces the next update
};

}

extern "C" s32 FUN_002b634c(u32 handle, f32* values);

/* Stores and forwards the four values when they differ or an update is forced, then clears the
 * force-update flag (the body of FUN_00343778). */
static __inline void updateValues(UpdateStateView* state, const Float4View* values)
{
    if (state->unk11DC != 0 ||
        state->unk11CC.components[0] != values->components[0] ||
        state->unk11CC.components[1] != values->components[1] ||
        state->unk11CC.components[2] != values->components[2] ||
        state->unk11CC.components[3] != values->components[3]) {
        state->unk11CC.components[0] = values->components[0];
        state->unk11CC.components[1] = values->components[1];
        state->unk11CC.components[2] = values->components[2];
        state->unk11CC.components[3] = values->components[3];
        FUN_002b634c(state->unk52C, state->unk11CC.components);
    }
    state->unk11DC = 0;
}

// Restores the four values to unity, forwarding them when they change or an update is forced.
extern "C" void renderCtxResetColorScale(UpdateStateView* state)
{
    Float4View ones;
    ones.components[0] = 1.0f;
    ones.components[1] = 1.0f;
    ones.components[2] = 1.0f;
    ones.components[3] = 1.0f;
    updateValues(state, &ones);
}
