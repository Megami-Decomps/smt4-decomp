/* NON_MATCHING: alternating-variant stores and saved coordinate registers differ from retail. */
#include "map/lmapMain.h"

extern "C" {
void FUN_00291e40(u32 effect, f32 x, f32 y, f32 z);
s32 randBetween(s32 minimum, s32 maximum);
extern u32 DAT_00447538;
extern LmapScene *g_lmapScene;
extern GameState g_gameState;

// Alternate one of three pairs of player effects at randomized positions above the actor.
void FUN_0027fca0(s32 variant)
{
    DAT_00447538 = (DAT_00447538 + 1) & 1;
    f32 x = g_lmapScene->transform.position[0];
    f32 y = g_lmapScene->transform.position[1] + 140.0f;
    f32 z = g_lmapScene->transform.position[2];
    y += static_cast<f32>(randBetween(-10, 10));
    x += static_cast<f32>(randBetween(-15, 15));
    z += static_cast<f32>(randBetween(-15, 15));
    if (variant == 0) {
        DAT_00447538 = 0;
    } else if (variant == 1) {
        DAT_00447538 = 1;
    }
    // Adding a word in the byte-aligned shared union would move its trailing flags.
    struct EffectModeView { u8 prefix[0x21c]; s32 mode; };
    const EffectModeView *state = reinterpret_cast<const EffectModeView *>(&g_gameState);
    if (state->mode == 0) {
        FUN_00291e40(DAT_00447538 + 0x10001f5, x, y, z);
    } else if (state->mode == 1) {
        FUN_00291e40(DAT_00447538 + 0x10001f7, x, y, z);
    } else if (state->mode == 2) {
        FUN_00291e40(DAT_00447538 + 0x10001f9, x, y, z);
    }
}
}
