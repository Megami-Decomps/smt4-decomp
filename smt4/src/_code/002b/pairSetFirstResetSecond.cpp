#include "ui/UiSpriteApi.h"

/* Shows image `image` of the sprite's texture table, dropping the secondary image. */
extern "C" void pairSetFirstResetSecond(UiSpriteState *sprite, s32 image)
{
    sprite->image = image;
    sprite->secondaryImage = -1;
}
