#include "ui/IfTouch.h"

extern "C" {

/* Returns the halfword at 0x64E of the record at 0x57F248. */
s32 ifTouchGetSelectedRegion(void)
{
    return g_ifTouch.state->selectedRegion;
}

} /* extern "C" */
