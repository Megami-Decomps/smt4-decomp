#include "ui/IfTouch.h"

/* Return the indexed touch-region value when touch input exists. */
extern "C" s32 ifTouchGetRegionX(u32 index)
{
    if (g_ifTouch.state != NULL) {
        return (s16)g_ifTouch.state->regions[index].x;
    }
    return 0;
}
