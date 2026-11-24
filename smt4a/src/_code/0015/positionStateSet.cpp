#include "AsdSDK/Source/Gfx/Text/AsdText.h"
#include "AsdSDK/Source/Gfx/Text/AsdTextA.h"

/* Sets the sprite's position mode, color and scale. */
extern "C" void positionStateSet(AsdText *object, s32 mode, u32 color, f32 scale)
{
    object->positionMode = mode;
    object->positionColor = color;
    object->positionScale = scale;
}
