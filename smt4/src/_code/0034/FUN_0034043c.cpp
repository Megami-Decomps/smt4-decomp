/* NON_MATCHING: packed-color loads and register allocation differ, including STRD rather than retail's nonconsecutive-register STM; recovered tail call is correct. */
#include "common.h"

struct BattleStageModel;
struct StageGradientView {
    u8 unk00[0x5c];
    u32 red, green, blue;
    u32 alpha0, alpha1, alpha2;
    u32 color0, color1, color2;
};

extern "C" {
void FUN_0024ac7c(s32 enabled);
void FUN_002e2444(u32 first, u32 middle, u32 last);

// Repack the stage's outer gradient colors, retaining the middle stop's RGB.
void FUN_0034043c(BattleStageModel *stage)
{
    StageGradientView *gradient = reinterpret_cast<StageGradientView *>(stage);
    u32 greenBlue = (gradient->green << 16) | (gradient->blue << 8);
    gradient->color2 = greenBlue | gradient->alpha2 | (gradient->red << 24);
    gradient->color0 = gradient->alpha0 | (gradient->red << 24) | greenBlue;
    gradient->color1 = (gradient->color1 & 0xffffff00) | gradient->alpha1;
    FUN_0024ac7c(1);
    FUN_002e2444(gradient->color0, gradient->color1, gradient->color2);
}
}
