#include "map/LmapGlobals.h"
#include "AsdSDK/Source/Snd/SoundActorQueue.h"
#include "game/GameState.h"
#include <string.h>

extern "C" {
s32 randBetween(s32 minimum, s32 maximum);
extern s32 DAT_00447538;

/* Alternates one of three pairs of player effects at randomized positions above the actor. */
void mapDepartSpawnPlayerEffect(s32 variant)
{
    ++DAT_00447538;
    DAT_00447538 &= 1;
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
        DAT_00447538 = 0;
        break;
    case 1:
        DAT_00447538 = 1;
        break;
    }
    switch (g_gameState.map.stageGroup) {
    case 0:
        soundActorStartOnFreeChannel(DAT_00447538 + 0x10001f5, position);
        break;
    case 1:
        soundActorStartOnFreeChannel(DAT_00447538 + 0x10001f7, position);
        break;
    case 2:
        soundActorStartOnFreeChannel(DAT_00447538 + 0x10001f9, position);
        break;
    }
}
} /* extern "C" */
