/* NON_MATCHING: written as its IV twin mapDepartSpawnPlayerEffect; the VFP registers of the three coordinates and the order of the jitter adds' operands differ. */
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
    ++DAT_005806c0;
    DAT_005806c0 &= 1;
    SoundActorQueuePosition position;
    position = *reinterpret_cast<const SoundActorQueuePosition *>(&g_lmapScene->pose.position);
    position.y += 140.0f;
    position.y += (f32)randBetween(-10, 10);
    position.x += (f32)randBetween(-15, 15);
    position.z += (f32)randBetween(-15, 15);
    switch (variant) {
    case 0:
        DAT_005806c0 = 0;
        break;
    case 1:
        DAT_005806c0 = 1;
        break;
    }
    switch (g_gameState.stageGroup) {
    case 0:
        soundActorStartOnFreeChannel(DAT_005806c0 + 0x10002A0, position);
        break;
    case 1:
        soundActorStartOnFreeChannel(DAT_005806c0 + 0x10002A2, position);
        break;
    case 2:
        soundActorStartOnFreeChannel(DAT_005806c0 + 0x10002A4, position);
        break;
    }
}
} /* extern "C" */
