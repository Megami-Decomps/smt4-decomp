/* NON_MATCHING: x and y load in the opposite order, and the second random displacement uses s1 rather than s2. */
#include "map/LmapSoundPosition.h"
#include "game/GameState.h"

extern "C" {
s32 randBetween(s32 minimum, s32 maximum);

/* Spawns a category-specific ambient effect at a randomized player-relative position. */
void FUN_0025bc80(void)
{
    SoundActorQueuePosition position = lmapSceneSoundPosition();
    s32 displacement = randBetween(-20, 20);
    position.x += displacement;
    displacement = randBetween(-20, 20);
    position.z += displacement;
    u32 variant = randBetween(0, 100) & 3;
    switch (g_gameState.selectedKind) {
    case 0: soundActorStartOnFreeChannel(variant + 0x1000203, position); return;
    case 1: soundActorStartOnFreeChannel(variant + 0x1000208, position); return;
    case 2: soundActorStartOnFreeChannel(variant + 0x100020d, position); return;
    case 3: soundActorStartOnFreeChannel(variant + 0x1000212, position); return;
    case 4: soundActorStartOnFreeChannel(variant + 0x1000217, position); return;
    }
}
} /* extern "C" */
