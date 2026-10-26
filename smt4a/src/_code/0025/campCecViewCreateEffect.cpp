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
/* Resets the view's speed to 1.0 and, when the option is enabled, creates the effect for the selection. */
s32 campCecViewCreateEffect(void)
{
    CampCecView *view = g_campCecView;
    CampCecViewOptions *options = &view->options;

    view->speed = 1.0f;
    if (view->options.enabled == 0) {
        return 0;
    }
    void *effect = FUN_0032d61c(view->options.effectId, view->resource, &view->speed, 0, 0,
                                options->selection);
    efctSetSpeed(effect, 1.0f);
    return 0;
}

} /* extern "C" */
