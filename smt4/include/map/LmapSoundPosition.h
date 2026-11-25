#ifndef MAP_LMAP_SOUND_POSITION_H
#define MAP_LMAP_SOUND_POSITION_H

#include "map/LmapGlobals.h"
#include "AsdSDK/Source/Snd/SoundActorQueue.h"

/* Takes the current player position for a positional sound. */
static __forceinline SoundActorQueuePosition lmapSceneSoundPosition(void)
{
    SoundActorQueuePosition position;
    position.x = g_lmapScene->pose.position.x;
    position.y = g_lmapScene->pose.position.y;
    position.z = g_lmapScene->pose.position.z;
    return position;
}

#endif
