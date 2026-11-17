#include "AsdSDK/Source/Gfx/AsdGfxContext.h"

extern "C" {

/* Sets the display offset of the active target. */
void FUN_00149840(s32 x, s32 y)
{
    g_asdGfxContext.targetX[g_asdGfxContext.activeTarget] = x;
    g_asdGfxContext.targetY[g_asdGfxContext.activeTarget] = y;
}

} /* extern "C" */
