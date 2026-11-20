#include "shard/W6_W6Match3_EffectColor.h"

extern "C" EffectColorQuadState g_quadColorState;

// Reset all four colors to white while preserving the shared alpha.
extern "C" void gxResetColorQuadToWhite(void)
{
    f32 alpha = g_quadColorState.alpha;
    for (u32 i = 0; i < 4; ++i)
        effectColorSet(&g_quadColorState.colors[i], 1.0f, 1.0f, 1.0f, alpha);
}
