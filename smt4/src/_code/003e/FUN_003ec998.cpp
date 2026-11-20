/* NON_MATCHING: vector initialization is an explicit loop rather than retail's C++ array-construction helper. */
#include "common.h"
#include "shard/W6_W6Match7_QuadVectors.h"
#include "util/BitsAndBytes.h"

struct GraphicsVectorDefaults {
    /* 0x00 */ u8 unk00[0x1c];
    /* 0x1c */ f32 unk1c[4];
    /* 0x2c */ QuadVector vectors[4];
};

extern "C" {
extern u32 DAT_0044ea20[2];
extern GraphicsVectorDefaults g_quadColorState;
extern u32 DAT_004d4914[4];

void FUN_003ec998(u32 first, u32 second, u32 *output)
{
    output[0] = first;
    output[1] = second;
    DAT_0044ea20[0] = 0;
    DAT_0044ea20[1] = 0;
    g_quadColorState.unk1c[0] = 1.0f;
    g_quadColorState.unk1c[1] = 1.0f;
    g_quadColorState.unk1c[2] = 1.0f;
    g_quadColorState.unk1c[3] = 1.0f;
    for (u32 index = 0; index < 4; ++index) {
        vectorSetAllOne(&g_quadColorState.vectors[index]);
    }
    DAT_004d4914[0] = packNibblesAndByte(6, 7, 0);
    DAT_004d4914[1] = packNibblesAndByte(6, 1, 0);
    DAT_004d4914[2] = packNibblesAndByte(6, 1, 2);
    DAT_004d4914[3] = packNibblesAndByte(5, 0, 1);
}
}
