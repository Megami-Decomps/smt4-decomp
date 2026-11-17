/* NON_MATCHING: player coordinate loads group into VLDM and floating coordinate register/add operand order differs. */
#include "map/lmapMain.h"
#include "AsdSDK/Source/Snd/SoundActorQueue.h"
#include "game/GameState.h"

extern "C" {
extern LmapScene *g_lmapScene;
s32 randBetween(s32 minimum, s32 maximum);

/* Spawn a category-specific ambient effect at a randomized player-relative position. */
void FUN_0025bc80(void)
{
    SoundActorQueuePosition position = {
        g_lmapScene->transform.position[0],
        g_lmapScene->transform.position[1],
        g_lmapScene->transform.position[2]
    };
    position.x += (f32)randBetween(-20, 20);
    position.z += (f32)randBetween(-20, 20);
    u32 variant = (u32)randBetween(0, 100) & 3;
    switch (g_gameState.selectedKind) {
    case 0: soundActorStartOnFreeChannel(variant + 0x1000203, position); return;
    case 1: soundActorStartOnFreeChannel(variant + 0x1000208, position); return;
    case 2: soundActorStartOnFreeChannel(variant + 0x100020d, position); return;
    case 3: soundActorStartOnFreeChannel(variant + 0x1000212, position); return;
    case 4: soundActorStartOnFreeChannel(variant + 0x1000217, position); return;
    }
}
}
