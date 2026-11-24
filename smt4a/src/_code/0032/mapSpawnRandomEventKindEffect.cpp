/* NON_MATCHING: the initial x/y loads are exchanged; all other instructions match. */
#include "common.h"
#include "map/LmapGlobals.h"
#include "game/GameStateA.h"
#include "shard/W5_W5Match7_SceneState.h"
#include "AsdSDK/Source/Snd/SoundActorQueue.h"

extern "C" {
s32 randBetween(s32 minimum, s32 maximum);

/* Scatters one of four event-kind sounds around the current map position. */
void mapSpawnRandomEventKindEffect()
{
    SoundActorQueuePosition position = {
        g_lmapScene->pose.position.x, g_lmapScene->pose.position.y, g_lmapScene->pose.position.z
    };
    s32 displacement = randBetween(-20, 20);
    position.x += displacement;
    displacement = randBetween(-20, 20);
    position.z += displacement;
    s32 randomSlot = randBetween(0, 100);
    u32 variant = randomSlot & 3;
    switch (g_gameState.selectedKind) {
    case 0:
        soundActorStartOnFreeChannel(variant + 0x10002ac, position);
        return;
    case 1:
        soundActorStartOnFreeChannel(variant + 0x10002b1, position);
        return;
    case 2:
        soundActorStartOnFreeChannel(variant + 0x10002b6, position);
        return;
    case 3:
        soundActorStartOnFreeChannel(variant + 0x10002bb, position);
        return;
    case 4:
        soundActorStartOnFreeChannel(variant + 0x10002c0, position);
        return;
    case 5:
        soundActorStartOnFreeChannel(variant + 0x10002d5, position);
        return;
    }
}
} /* extern "C" */
