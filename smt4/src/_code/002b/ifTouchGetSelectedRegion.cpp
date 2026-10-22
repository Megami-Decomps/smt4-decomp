#include "ui/IfTouch.h"

extern "C" {

int ifTouchGetSelectedRegion(void)
{
    return g_ifTouch.state->selectedRegion;
}

} /* extern "C" */
