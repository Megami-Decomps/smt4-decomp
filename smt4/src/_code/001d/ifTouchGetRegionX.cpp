#include "ui/IfTouch.h"

// Read the selected touch value, or zero when the table is unavailable.
extern "C" s32 ifTouchGetRegionX(u32 index)
{
    return g_ifTouch.state != NULL ? (s16)g_ifTouch.state->regions[index].x : 0;
}
