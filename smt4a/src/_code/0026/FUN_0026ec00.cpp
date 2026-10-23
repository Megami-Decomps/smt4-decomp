/* NON_MATCHING: opacity field addressing is folded differently; retail retains accessor NOPs. */
#include "camp/CampState.h"

extern "C" {
extern CampStateA *g_camp;
void efctSetSpeed(f32);
void FUN_00164b5c(s32, s32, s32, s32, s32, s32);
void FUN_001835b4(s32, s32, s32, s32, s32, s32);

// Draw one of two layered camp labels with independently animated opacity.
void FUN_0026ec00(s32 x, s32 y, s32 alternate)
{
    struct LabelOpacityView {
        u8 prefix[0x790];
        f32 foreground;
        u8 unk794[0x88];
        f32 background;
    };
    LabelOpacityView *label = reinterpret_cast<LabelOpacityView *>(g_camp);
    efctSetSpeed(label->background);
    FUN_00164b5c(2, 20, 6, x, y, 121);
    efctSetSpeed(1.0f);
    FUN_001835b4(2, 20, 0x429, x, y, 126);
    if (alternate) {
        FUN_001835b4(2, 20, 0x5CF, x, y, 127);
        FUN_001835b4(2, 20, 0x5D0, x, y, 127);
        FUN_001835b4(2, 20, 0x5D2, x, y, 128);
        efctSetSpeed(label->foreground);
        FUN_001835b4(2, 20, 0x5D1, x, y, 131);
        efctSetSpeed(1.0f);
    } else {
        FUN_001835b4(2, 20, 0x42A, x, y, 127);
        FUN_001835b4(2, 20, 0x42B, x, y, 127);
        FUN_001835b4(2, 20, 0x5C9, x, y, 128);
        efctSetSpeed(label->foreground);
        FUN_001835b4(2, 20, 0x42C, x, y, 131);
        efctSetSpeed(1.0f);
    }
}
}
