#include "shard/W5_W5Match7_SceneState.h"
#include "map/LmapGlobals.h"
#include "game/GameStateA.h"
#include "AsdSDK/Source/Snd/SoundActorQueue.h"
#include <string.h>

extern "C" {
extern u32 DAT_005806c0;
s32 randBetween(s32, s32);

/* Alternate a regional map effect and scatter it near the scene position. */
void mapDepartSpawnPlayerEffect(s32 variant)
{
    ++DAT_005806c0;
    DAT_005806c0 &= 1;
    SoundActorQueuePosition position;
    memcpy(&position, &g_lmapScene->pose.position, sizeof(position));
    position.y += 140.0f;
    s32 displacement = randBetween(-10, 10);
    position.y += displacement;
    displacement = randBetween(-15, 15);
    position.x += displacement;
    displacement = randBetween(-15, 15);
    position.z += displacement;
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
