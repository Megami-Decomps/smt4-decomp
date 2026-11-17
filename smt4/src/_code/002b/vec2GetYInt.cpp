#include "ui/UiSpriteApi.h"

/* The sprite's y position in whole pixels. */
extern "C" s32 vec2GetYInt(const UiSpriteState *sprite)
{
    return sprite->y >> 12;
}
