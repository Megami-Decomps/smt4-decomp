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
u32 requestImageDraw(u32 effectHandle, EffectParameters* parameters);
void efctSetSpeed(f32 speed);

/* Job callback: draws the camp effect image while it is active. */
u32 campCecViewDrawEffectImage(u32 job)
{
    CampCecView* view = g_campCecView;
    if (view->effectActive == 0) {
        return 0;
    }

    requestImageDraw(view->effectHandle, &view->effectParameters);
    efctSetSpeed(1.0f);
    return 0;
}
}
