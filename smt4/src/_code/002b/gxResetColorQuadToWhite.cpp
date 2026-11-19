#include "shard/W6_W6Match3_EffectColor.h"

extern "C" EffectColorQuadState DAT_004d4680;

// Reset all four colors to white while preserving the shared alpha.
extern "C" void gxResetColorQuadToWhite(void)
{
    f32 alpha = DAT_004d4680.alpha;
    for (u32 i = 0; i < 4; ++i)
        effectColorSet(&DAT_004d4680.colors[i], 1.0f, 1.0f, 1.0f, alpha);
}
