#include "common.h"
#include "AsdSDK/Source/Gfx/Effect/effPolygonRing.h"

extern "C" {

extern u32 g_effFrameCounter;

u32 effGetFrameCounter(void)
{
    return g_effFrameCounter;
}

} /* extern "C" */
