/* NON_MATCHING: pool order, loads and registers now match; only the three jitter adds take their operands the other way round (retail vadd s17, s17, s0: the coordinate first). */
#include "map/LmapGlobals.h"
#include "AsdSDK/Source/Snd/SoundActorQueue.h"
#include "game/GameState.h"

extern "C" {
s32 randBetween(s32 minimum, s32 maximum);
extern s32 DAT_00447538;

// Alternate one of three pairs of player effects at randomized positions above the actor.
void mapDepartSpawnPlayerEffect(s32 variant)
{
    ++DAT_00447538;
    DAT_00447538 &= 1;
    SoundActorQueuePosition position;
    position = *reinterpret_cast<const SoundActorQueuePosition *>(&g_lmapScene->pose.position);
    position.y += 140.0f;
    position.y += randBetween(-10, 10);
    position.x += randBetween(-15, 15);
    position.z += randBetween(-15, 15);
    switch (variant) {
    case 0:
        DAT_00447538 = 0;
        break;
    case 1:
        DAT_00447538 = 1;
        break;
    }
    // Adding a word in the byte-aligned shared union would move its trailing flags.
    struct EffectModeView { u8 prefix[0x21c]; s32 mode; };
    const EffectModeView *state = reinterpret_cast<const EffectModeView *>(&g_gameState);
    switch (state->mode) {
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
}
