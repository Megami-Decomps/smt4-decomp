#include "common.h"

namespace {
struct UiSprite { u8 unk00[0x5C]; s16 mode; u8 unk5E[0x2C]; s8 completion; };
struct Bustup { u8 unk00[0x20]; UiSprite sprite; };
}

extern "C" {
extern Bustup *g_btlTalkBustUp;
s8 uiSpriteGetCompletionState(const UiSprite *sprite);
s32 uiSpriteGetMode(const UiSprite *sprite);

/* True while the battle talk bust-up sprite is idle and in mode 10. */
u32 FUN_0035fcbc(void)
{
    u32 result = 0;
    Bustup *bustup = g_btlTalkBustUp;
    if (bustup != NULL && uiSpriteGetCompletionState(&bustup->sprite) == 0 &&
        uiSpriteGetMode(&bustup->sprite) == 10) {
        result = 1;
    }
    return result;
}
}
