#include "common.h"

struct CampCecViewState {
    f32 unk00;    // 0x00
    f32 unk04;    // 0x04
    f32 unk08;    // 0x08
    f32 unk0c;    // 0x0c
    f32 unk10;    // 0x10
    f32 unk14;    // 0x14
    f32 unk18;    // 0x18
    u32 handle;   // 0x1c
    u32 unk20;    // 0x20
    u32 pending;  // 0x24
    u32 counter;  // 0x28
};

extern "C" {
void statusCameraSelectPreset(s32);
void FUN_0020ffe8(u32, s32, f32, f32);
void FUN_002d9208();

// Restore the camp-CEC presentation defaults and clear its pending transform.
void campCecResetViewState(CampCecViewState* state)
{
    statusCameraSelectPreset(0);
    state->unk18 = 0.012f;
    state->unk10 = 350.0f;
    state->unk00 = 1.2f;
    state->unk04 = 5.3f;
    state->unk08 = 0.5f;
    state->counter = 0;
    if (state->pending != 0) {
        state->pending = 0;
        FUN_0020ffe8(state->handle, 0, 0.0f, 0.0f);
    }
    FUN_002d9208();
}
}
