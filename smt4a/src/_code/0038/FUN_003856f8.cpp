/* NON_MATCHING: Retail ldr r5, [pc, #128] differs from recovered ldr r5, [pc, #96]. */
#include "common.h"

namespace {

struct LmapSceneEntryView {
    u32 unk00; // 0x00
    u32 unk04; // 0x04
};

struct LmapSceneView {
    u8 unk00[0x18c]; // 0x00
    LmapSceneEntryView* unk18C; // 0x18c
};

}

extern "C" {
extern LmapSceneView* g_lmapScene;
extern s32 gameFlagIsSet(u32 flag);
extern s32 FUN_002e5db4(void);
extern void FUN_003fd7c0(u32 target, u32 mode, u32 option, f32 amount);
}

// Apply the requested mode, with a mode-3, amount-10 override when required by game state.
extern "C" void FUN_003856f8(u32 mode)
{
    if (g_lmapScene->unk18C == 0) {
        return;
    }

    f32 amount = 0.0f;
    if (gameFlagIsSet(0x4c9) != 0 && FUN_002e5db4() == 0) {
        mode = 3;
        amount = 10.0f;
    }

    FUN_003fd7c0(g_lmapScene->unk18C->unk04, mode, 2, amount);
}
