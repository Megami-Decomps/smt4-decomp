/* NON_MATCHING: variant alternation folds to BIC, and the position loads and VFP register allocation differ. */
#include "shard/W5_W5Match7_SceneState.h"
#include "map/LmapGlobals.h"
#include "game/GameStateA.h"
#include "AsdSDK/Source/Snd/SoundActorQueue.h"

extern "C" {
extern u32 DAT_005806c0;
s32 randBetween(s32, s32);

/* Alternate a regional map effect and scatter it near the scene position. */
void FUN_00324e38(s32 variant)
{
    DAT_005806c0 = (DAT_005806c0 + 1) & 1;
    const MapVector &pose = g_lmapScene->pose.position;
    SoundActorQueuePosition position = {pose.x, pose.y, pose.z};
    position.y += 140.0f;
    position.y += (f32)randBetween(-10, 10);
    position.x += (f32)randBetween(-15, 15);
    position.z += (f32)randBetween(-15, 15);
    if (variant == 0) {
        DAT_005806c0 = 0;
    } else if (variant == 1) {
        DAT_005806c0 = 1;
    }
    u32 region = g_gameState.stageGroup;
    if (region == 0) {
        soundActorStartOnFreeChannel(DAT_005806c0 + 0x10002A0, position);
    } else if (region == 1) {
        soundActorStartOnFreeChannel(DAT_005806c0 + 0x10002A2, position);
    } else if (region == 2) {
        soundActorStartOnFreeChannel(DAT_005806c0 + 0x10002A4, position);
    }
}
} /* extern "C" */
