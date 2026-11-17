#include "ui/UiSpriteApi.h"

/* The sprite's x position in whole pixels. */
extern "C" s32 vec2GetXInt(const UiSpriteState *sprite)
{
    return sprite->x >> 12;
}
