#include "common.h"
#include "game/GameStateA.h"

extern "C" {
s32 scrGetArg(s32 index);
void resourceTableReleaseHandles(void);
s8 soundActorQueueIsEnabled(void);
void soundActorQueueStartPending(void);
void mapAmbientSoundActorsSpawn(s32 map, s32 section);

/* Script command: with a nonzero argument 0 stops the map's ambient sound actors; with 0 restarts
 * them, or spawns them for the current map and area when the actor queue is not enabled yet. */
u32 scrCommSetAmbientSoundsStopped(void)
{
    if (scrGetArg(0) == 0) {
        if (soundActorQueueIsEnabled() != 0) {
            soundActorQueueStartPending();
        } else {
            mapAmbientSoundActorsSpawn(g_gameState.mapId, g_gameState.areaId);
        }
    } else {
        resourceTableReleaseHandles();
    }
    return 1;
}

} /* extern "C" */
