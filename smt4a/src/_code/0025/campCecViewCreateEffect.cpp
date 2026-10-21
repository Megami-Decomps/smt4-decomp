/* NON_MATCHING: selection uses a literal offset and stack arguments use STRD instead of retail short-offset loads and STR. */
#include "common.h"

extern "C" {

struct CampCecViewOptions {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 effectId;
    /* 0x14 */ u8 unk14[0x21];
    /* 0x35 */ s8 selection;
    /* 0x36 */ u8 unk36[7];
    /* 0x3D */ u8 enabled;
};

struct CampCecView {
    /* 0x000 */ u8 unk000[0xC];
    /* 0x00C */ void *resource;
    /* 0x010 */ u8 unk010[0x68];
    /* 0x078 */ f32 speed;
    /* 0x07C */ u8 unk07C[0x84];
    /* 0x100 */ CampCecViewOptions options;
};
extern CampCecView *g_campCecView;
void *FUN_0032d61c(u32 effectId, void *resource, void *parameters, u32 mode, u32 flags, s32 selection);
void efctSetSpeed(void *effect, f32 speed);
s32 campCecViewCreateEffect(void)
{
    g_campCecView->speed = 1.0f;
    if (g_campCecView->options.enabled != 0) {
        void *effect = FUN_0032d61c(g_campCecView->options.effectId, g_campCecView->resource,
                                  &g_campCecView->speed, 0, 0, g_campCecView->options.selection);
        efctSetSpeed(effect, 1.0f);
    }
    return 0;
}

} /* extern "C" */
