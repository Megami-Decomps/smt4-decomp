#include "gfx/TextureDrawPivot.h"

/* Sets the pivot's depth and both anchor modes; a mode of 3 also takes its coordinate. */
extern "C" void FUN_00281000(TextureDrawPivot *pivot, f32 depth, s16 horizontalMode, s16 verticalMode, u16 x, u16 y)
{
    pivot->depth = depth;
    pivot->horizontalMode = horizontalMode;
    pivot->verticalMode = verticalMode;
    if (horizontalMode == 3) {
        pivot->x = x;
    }
    if (verticalMode == 3) {
        pivot->y = y;
    }
}
