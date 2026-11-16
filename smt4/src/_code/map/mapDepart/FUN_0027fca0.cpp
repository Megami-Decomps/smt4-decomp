/* NON_MATCHING: pool order and loads now match; only the callee-saved VFP registers of the three coordinates differ (retail x/y/z in s18/s17/s16) with the jitter adds commuted. */
#include "map/lmapMain.h"
#include "AsdSDK/Source/Snd/SoundActorQueue.h"

extern "C" {
s32 randBetween(s32 minimum, s32 maximum);
extern s32 DAT_00447538;
extern LmapScene *g_lmapScene;
extern GameState g_gameState;

// Alternate one of three pairs of player effects at randomized positions above the actor.
void FUN_0027fca0(s32 variant)
{
    ++DAT_00447538;
    DAT_00447538 &= 1;
    SoundActorQueuePosition position;
    position = *reinterpret_cast<const SoundActorQueuePosition *>(g_lmapScene->transform.position);
    position.y += 140.0f;
    position.y += randBetween(-10, 10);
    position.x += randBetween(-15, 15);
    position.z += randBetween(-15, 15);
    if (variant == 0) {
        DAT_00447538 = 0;
    } else if (variant == 1) {
        DAT_00447538 = 1;
    }
    // Adding a word in the byte-aligned shared union would move its trailing flags.
    struct EffectModeView { u8 prefix[0x21c]; s32 mode; };
    const EffectModeView *state = reinterpret_cast<const EffectModeView *>(&g_gameState);
    if (state->mode == 0) {
        soundActorStartOnFreeChannel(DAT_00447538 + 0x10001f5, position);
    } else if (state->mode == 1) {
        soundActorStartOnFreeChannel(DAT_00447538 + 0x10001f7, position);
    } else if (state->mode == 2) {
        soundActorStartOnFreeChannel(DAT_00447538 + 0x10001f9, position);
    }
}
}
