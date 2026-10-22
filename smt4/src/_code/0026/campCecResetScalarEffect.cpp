#include "common.h"

struct ScalarEffectState {
    f32 first;    // 0x00
    f32 second;   // 0x04
    f32 third;    // 0x08
    u32 unk0c;    // 0x0c
    f32 limit;    // 0x10
    u32 unk14;    // 0x14
    f32 rate;     // 0x18
    u32 handle;   // 0x1c
    u32 unk20;    // 0x20
    u32 active;   // 0x24
    u32 counter;  // 0x28
};

extern "C" {
void FUN_0020ffe8(u32 handle, f32 first, f32 second);
void FUN_002d9208();

// Restore scalar-effect defaults and stop its active handle before the shared reset.
void campCecResetScalarEffect(ScalarEffectState* effect)
{
    effect->rate = 0.012f;
    effect->limit = 350.0f;
    effect->first = 1.2f;
    effect->second = 5.3f;
    effect->third = 0.5f;
    effect->counter = 0;
    if (effect->active != 0) {
        effect->active = 0;
        FUN_0020ffe8(effect->handle, 0.0f, 0.0f);
    }
    FUN_002d9208();
}
}
