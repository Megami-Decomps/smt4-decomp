#include "ui/UiSpriteApi.h"

/* The finished flag: every track of the sprite is done. */
extern "C" s8 uiSpriteGetCompletionState(const UiSpriteState *sprite)
{
    return sprite->finished;
}
