#include "battle/Talk/btlTalkBustUp.h"

extern "C" {
s8 uiSpriteGetCompletionState(const UiSpriteState *sprite);
s32 uiSpriteGetMode(const UiSpriteState *sprite);

/* True while the battle talk bust-up sprite is idle and in mode 10. */
u32 btlTalkBustUpIsIdle(void)
{
    u32 result = 0;
    BtlTalkBustUp *bustup = g_btlTalkBustUp;
    if (bustup != NULL && uiSpriteGetCompletionState(&bustup->sprites[0]) == 0 &&
        uiSpriteGetMode(&bustup->sprites[0]) == 10) {
        result = 1;
    }
    return result;
}
}
