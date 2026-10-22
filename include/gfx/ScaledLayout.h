#ifndef GFX_SCALED_LAYOUT_H
#define GFX_SCALED_LAYOUT_H
#include "shard/W6_W6Match7_QuadVectors.h"

struct ScaledLayoutParameters {
    u8 unk00[0x14]; // 0x00
    s32 unk14; // 0x14
    u8 unk18[0x20]; // 0x18
    s16 unk38; // 0x38
};

struct ScaledLayout {
    u8 unk00[0x58]; // 0x000
    f32 unk58; // 0x058
    u8 unk5C[0x40]; // 0x05C
    f32 unk9C; // 0x09C
    u8 unkA0[0x40]; // 0x0A0
    f32 unkE0; // 0x0E0
    u8 unkE4[0x40]; // 0x0E4
    f32 unk124; // 0x124
    u8 unk128[0x18]; // 0x128
    QuadVector3 position; // 0x140
    u8 unk14C[8]; // 0x14C
    ScaledLayoutParameters parameters; // 0x154
};
#endif
