#include "battle/Talk/btlTalkBustUp.h"

extern "C" {

s32 uiSpriteGetCompletionState(const UiSpriteState *sprite);

/* An absent bust-up or a portrait sprite that finished reports ready. */
s32 battleTalkIsBustReady(void)
{
    if (g_btlTalkBustUp == NULL) {
        return 1;
    }
    return uiSpriteGetCompletionState(&g_btlTalkBustUp->sprites[0]) != 0;
}

} /* extern "C" */
