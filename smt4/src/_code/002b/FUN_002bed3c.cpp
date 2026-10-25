/* NON_MATCHING: final-color base/writeback addressing differs after loop unrolling. */
#include "shard/W6_W6Match3_EffectColor.h"

extern "C" EffectColorQuadState DAT_004d4680;

// Reset all four colors to white while preserving the shared alpha.
extern "C" void FUN_002bed3c(void)
{
    f32 alpha = DAT_004d4680.alpha;
    for (u32 i = 0; i < 4; ++i) {
        DAT_004d4680.colors[i].red = 1.0f;
        DAT_004d4680.colors[i].green = 1.0f;
        DAT_004d4680.colors[i].blue = 1.0f;
        DAT_004d4680.colors[i].alpha = alpha;
    }
}
