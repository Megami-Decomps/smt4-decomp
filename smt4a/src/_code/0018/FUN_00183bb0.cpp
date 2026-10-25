/* NON_MATCHING: shared alpha is now read first like retail; the unrolled stores differ in register (r1/r2) and the last color uses a pointer with writeback in retail but plain offsets here. */
#include "shard/W6_W6Match3_EffectColor.h"

extern "C" EffectColorQuadState DAT_006306f8;

// Reset all four colors to white while preserving the shared alpha.
extern "C" void FUN_00183bb0(void)
{
    f32 alpha = DAT_006306f8.alpha;
    for (u32 i = 0; i < 4; ++i) {
        DAT_006306f8.colors[i].red = 1.0f;
        DAT_006306f8.colors[i].green = 1.0f;
        DAT_006306f8.colors[i].blue = 1.0f;
        DAT_006306f8.colors[i].alpha = alpha;
    }
}
