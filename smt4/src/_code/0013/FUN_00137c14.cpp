/* NON_MATCHING: loop constant register allocation (retail r3/ip/r1/r5 vs r5/r6/r3/r7) and address-computation order differ; the null-callback path now matches. */
#include "common.h"
#include "AsdSDK/AsdMemUtil.h"

struct GfxAttributeLocalView {
    u32 unk00;             // 0x00
    u32 unk04;             // 0x04
    u32 unk08;             // 0x08
    u8 unk0C[0x0C];        // 0x0C
};

struct GfxVector4LocalView {
    f32 unk00;             // 0x00
    f32 unk04;             // 0x04
    f32 unk08;             // 0x08
    f32 unk0C;             // 0x0C
};

struct GfxEntryLocalView {
    u32 unk00;             // 0x00
    u32 unk04;             // 0x04
    u32 unk08;             // 0x08
};

struct GfxStateLocalView {
    GfxAttributeLocalView unk000[16]; // 0x000
    u8 unk180[8];                     // 0x180
    GfxVector4LocalView unk188[16];    // 0x188
    GfxEntryLocalView unk288[16];     // 0x288
};

extern "C" {
extern void* (*g_gfxAllocateCallback)(u32, u32, u32, u32);

// Allocate and clear the graphics state, then initialize its sixteen entry defaults.
GfxStateLocalView* FUN_00137c14(void)
{
    GfxStateLocalView* state;
    if (!g_gfxAllocateCallback) {
        state = 0;
    } else {
        state = static_cast<GfxStateLocalView*>(
            g_gfxAllocateCallback(0x10000, 0x100, 0, 0x348));
        if (state) {
            memClear(state, 0x348);
            for (s32 index = 0; index < 16; ++index) {
                state->unk000[index].unk04 = 4;
                state->unk000[index].unk08 = 0x1406;
                state->unk188[index].unk08 = 0.0f;
                state->unk188[index].unk04 = 0.0f;
                state->unk188[index].unk00 = 0.0f;
                state->unk188[index].unk0C = 1.0f;
                state->unk288[index].unk04 = 0;
                state->unk288[index].unk00 = 0x3F000000;
                state->unk288[index].unk08 = 0;
            }
        }
    }
    return state;
}
}
