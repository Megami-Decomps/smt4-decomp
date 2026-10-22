/* NON_MATCHING: Retail ldrd r4, [r1] differs from recovered ldm r1, {r5, ip}. */
#include "common.h"

typedef unsigned long long MaskBits;

struct BattleMainMaskView {
    u8 unk00[0x78];       // 0x000
    MaskBits unk78;       // 0x078
    u8 unk80[0x50];       // 0x080
    MaskBits unkD0;       // 0x0D0
    u8 unkD8[0x30];       // 0x0D8
    MaskBits unk108;      // 0x108
};

struct BattleStateView {
    u8 unk00[0x45A0];     // 0x0000
    MaskBits unk45A0;     // 0x45A0
    u8 unk45A8[0x7C4];    // 0x45A8
    s32 unk4D6C;          // 0x4D6C
};

extern "C" {
extern BattleMainMaskView g_btlMain;

// Require a matching input mask and positive state value, with neither excluded state mask set.
u32 FUN_003f1244(const BattleStateView* state, const MaskBits* mask)
{
    if (mask == 0) {
        return 0;
    }

    if ((*mask & g_btlMain.unk78) == 0) {
        return 0;
    }

    if (state->unk4D6C <= 0) {
        return 0;
    }

    const MaskBits stateMask = state->unk45A0;
    if ((stateMask & g_btlMain.unkD0) != 0) {
        return 0;
    }

    return (stateMask & g_btlMain.unk108) == 0;
}
}
