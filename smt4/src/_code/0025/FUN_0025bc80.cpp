/* NON_MATCHING: player coordinate loads group into VLDM and floating coordinate register/add operand order differs. */
#include "map/lmapMain.h"

extern "C" {
extern LmapScene *g_lmapScene;
extern GameState g_gameState;
s32 randBetween(s32 minimum, s32 maximum);
void FUN_00291e40(u32 effect, f32 x, f32 y, f32 z);

/* Spawn a category-specific ambient effect at a randomized player-relative position. */
void FUN_0025bc80(void)
{
    f32 x = g_lmapScene->transform.position[0];
    f32 y = g_lmapScene->transform.position[1];
    f32 z = g_lmapScene->transform.position[2];
    x += (f32)randBetween(-20, 20);
    z += (f32)randBetween(-20, 20);
    u32 variant = (u32)randBetween(0, 100) & 3;
    switch (g_gameState.ambientEffect.category) {
    case 0: FUN_00291e40(variant + 0x1000203, x, y, z); return;
    case 1: FUN_00291e40(variant + 0x1000208, x, y, z); return;
    case 2: FUN_00291e40(variant + 0x100020d, x, y, z); return;
    case 3: FUN_00291e40(variant + 0x1000212, x, y, z); return;
    case 4: FUN_00291e40(variant + 0x1000217, x, y, z); return;
    }
}
}
