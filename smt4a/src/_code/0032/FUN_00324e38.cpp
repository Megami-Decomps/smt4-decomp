/* NON_MATCHING: variant alternation folds to BIC and random-position VFP register allocation differs. */
#include "shard/W5_W5Match7_SceneState.h"

extern "C" {
extern u32 DAT_005806c0;
s32 FUN_00184964(s32, s32);
void FUN_003d4ed8(u32, f32, f32, f32);

/* Alternate a regional map effect and scatter it near the scene position. */
void FUN_00324e38(s32 variant)
{
    struct RegionView {
        u8 unk000[0x250];
        s32 region;
    };
    typedef char RegionViewOffset[offsetof(RegionView, region) == 0x250 ? 1 : -1];
    DAT_005806c0 = (DAT_005806c0 + 1) & 1;
    MapVector position = g_lmapScene->position;
    position.y += 140.0f;
    position.y += (f32)FUN_00184964(-10, 10);
    position.x += (f32)FUN_00184964(-15, 15);
    position.z += (f32)FUN_00184964(-15, 15);
    if (variant == 0) {
        DAT_005806c0 = 0;
    } else if (variant == 1) {
        DAT_005806c0 = 1;
    }
    switch (((const RegionView *)&g_gameState)->region) {
    case 0:
        FUN_003d4ed8(DAT_005806c0 + 0x10002A0, position.x, position.y, position.z);
        break;
    case 1:
        FUN_003d4ed8(DAT_005806c0 + 0x10002A2, position.x, position.y, position.z);
        break;
    case 2:
        FUN_003d4ed8(DAT_005806c0 + 0x10002A4, position.x, position.y, position.z);
        break;
    }
}
}
