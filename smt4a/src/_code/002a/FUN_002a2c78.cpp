/* NON_MATCHING: retail uses push {r4, lr} where the compiled block uses bxeq lr. */
#include "common.h"

struct EffectParameters {
    u8 unk00[0xB1];
};

struct CampCecView {
    u8 unk00[0x0C];             // 0x000
    u32 effectHandle;          // 0x00C
    u8 unk10[0x7C];            // 0x010
    EffectParameters effectParameters; // 0x08C
    u8 effectActive;           // 0x13D
};

extern "C" {
extern CampCecView* g_campCecView;
u32 FUN_00227048(u32 effectHandle, EffectParameters* parameters);
void efctSetSpeed(u32 effectHandle, f32 speed);

u32 FUN_002a2c78(void)
{
    CampCecView* view = g_campCecView;
    if (view->effectActive == 0) {
        return 0;
    }

    u32 effectHandle = FUN_00227048(view->effectHandle,
                                  &view->effectParameters);
    efctSetSpeed(effectHandle, 1.0f);
    return 0;
}
}
