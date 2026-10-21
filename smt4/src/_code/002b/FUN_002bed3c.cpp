/* NON_MATCHING: alpha load/register scheduling and final-color base/writeback addressing differ after loop unrolling. */
#include "shard/W6_W6Match3_EffectColor.h"

extern "C" EffectColorQuadState DAT_004d4680;

// Reset all four colors to white while preserving the shared alpha.
extern "C" void FUN_002bed3c(void)
{
    for (u32 i = 0; i < 4; ++i) {
        DAT_004d4680.colors[i].red = 1.0f;
        DAT_004d4680.colors[i].green = 1.0f;
        DAT_004d4680.colors[i].blue = 1.0f;
        DAT_004d4680.colors[i].alpha = DAT_004d4680.alpha;
    }
}
