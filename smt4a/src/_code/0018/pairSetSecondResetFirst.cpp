#include "ui/UiSpriteApi.h"

/* Shows the secondary image `secondaryImage`, dropping the image. */
extern "C" void pairSetSecondResetFirst(UiSpriteState *sprite, s32 secondaryImage)
{
    sprite->image = -1;
    sprite->secondaryImage = secondaryImage;
}
