/* NON_MATCHING: head and the default-format stores match retail; retail saves r8 as well (unused) and allocates the loop constants (4 in r3, 0x1406 in ip, the zero copy in r1) differently. */
#include "common.h"

struct GfxAttributeFormatLocalView {
    u32 unk00;                    // 0x00
    u32 unk04;                    // 0x04
};

struct GfxAttributeLocalView {
    u32 unk00;                    // 0x00
    GfxAttributeFormatLocalView unk04; // 0x04
    u8 unk0C[0x0C];               // 0x0C
};

struct GfxVector4LocalView {
    f32 unk00;                    // 0x00
    f32 unk04;                    // 0x04
    f32 unk08;                    // 0x08
    f32 unk0C;                    // 0x0C
};

struct GfxEntryDefaultsLocalView {
    u32 unk00;                    // 0x00
    u32 unk04;                    // 0x04
    u32 unk08;                    // 0x08
};

struct GfxStateLocalView {
    GfxAttributeLocalView unk000[16]; // 0x000
    u8 unk180[8];                    // 0x180
    GfxVector4LocalView unk188[16];   // 0x188
    GfxEntryDefaultsLocalView unk288[16]; // 0x288
};

extern "C" {
extern void* (*g_gfxAllocateCallback)(u32, u32, u32, u32);
void sysMemClear(void* destination, u32 size);

// Allocate and clear the graphics state, then initialize its sixteen entry defaults.
GfxStateLocalView* FUN_0017e844(void)
{
    GfxStateLocalView* state;
    if (!g_gfxAllocateCallback) {
        state = 0;
    } else {
        state = static_cast<GfxStateLocalView*>(
            g_gfxAllocateCallback(0x10000, 0x100, 0, 0x348));
        if (state) {
            sysMemClear(state, 0x348);
            for (s32 index = 0; index < 16; ++index) {
                state->unk000[index].unk04.unk00 = 4;
                state->unk000[index].unk04.unk04 = 0x1406;
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
