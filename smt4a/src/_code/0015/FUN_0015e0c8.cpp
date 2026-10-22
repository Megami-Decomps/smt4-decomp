/* NON_MATCHING: Retail ldr r1, [r4, #20] differs from recovered ldr r2, [r4, #20]. */
#include "common.h"

// Private views of the layouts accessed by this function.
struct CostStateView {
    u8 unk00[0x04]; // +0x00
    s32 unk04;      // +0x04
    s32 unk08;      // +0x08
    s32 unk0C;      // +0x0C
    u8 unk10[0x04]; // +0x10
    s32 unk14;      // +0x14
    s32 unk18;      // +0x18
    u8 unk1C;       // +0x1C
    u8 unk1D;       // +0x1D
    u8 unk1E;       // +0x1E
    u8 unk1F;       // +0x1F
    s32 unk20;      // +0x20
};

struct CostGlobalView {
    u8 unk00[0x04]; // +0x00
    u32 unk04;     // +0x04
};

extern "C" {
extern CostGlobalView DAT_0059dba4;
extern u32 nw_snd_internal_driver_VoiceManager_GetInstance(void);
extern u32 FUN_00191548(void);
extern s32 FUN_00175c30(u32 manager, u32 selector);
extern s32 FUN_00175a78(u32 manager, u32 selector);

// Sum the base contributions, external contributions, and enabled adjustments.
s32 FUN_0015e0c8(CostStateView *state)
{
    s32 base = state->unk0C + state->unk18 + state->unk14;
    s32 voiceContribution = FUN_00175c30(
        nw_snd_internal_driver_VoiceManager_GetInstance(),
        DAT_0059dba4.unk04);
    s32 otherContribution = FUN_00175a78(
        FUN_00191548(), DAT_0059dba4.unk04);
    s32 total = otherContribution + voiceContribution + base;

    if (state->unk1C == 1) {
        total += state->unk08;
    }
    if (state->unk04 == 1 && state->unk1E != 0) {
        total += state->unk08;
    }
    if (state->unk1D != 0 && state->unk20 > 0) {
        total += state->unk20 * 8;
    }
    return total;
}
}
