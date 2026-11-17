/* NON_MATCHING: variant alternation folds to BIC and random-position VFP register allocation differs. */
#include "shard/W5_W5Match7_SceneState.h"
#include "game/GameStateA.h"

extern "C" {
extern u32 DAT_005806c0;
s32 randBetween(s32, s32);
void soundActorStartOnFreeChannel(u32, f32, f32, f32);

/* Alternate a regional map effect and scatter it near the scene position. */
void FUN_00324e38(s32 variant)
{
    DAT_005806c0 = (DAT_005806c0 + 1) & 1;
    MapVector position = g_lmapScene->position;
    position.y += 140.0f;
    position.y += (f32)randBetween(-10, 10);
    position.x += (f32)randBetween(-15, 15);
    position.z += (f32)randBetween(-15, 15);
    if (variant == 0) {
        DAT_005806c0 = 0;
    } else if (variant == 1) {
        DAT_005806c0 = 1;
    }
    switch (g_gameState.areaTypeB) {
    case 0:
        soundActorStartOnFreeChannel(DAT_005806c0 + 0x10002A0, position.x, position.y, position.z);
        break;
    case 1:
        soundActorStartOnFreeChannel(DAT_005806c0 + 0x10002A2, position.x, position.y, position.z);
        break;
    case 2:
        soundActorStartOnFreeChannel(DAT_005806c0 + 0x10002A4, position.x, position.y, position.z);
        break;
    }
}
}
