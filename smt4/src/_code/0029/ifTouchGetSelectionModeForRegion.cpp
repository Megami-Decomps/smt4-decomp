#include "ui/IfTouch.h"

extern "C" {

u8 ifTouchGetSelectionModeForRegion(int id)
{
    if (g_ifTouch.state->selectedRegion == id) {
        return g_ifTouch.state->selectionMode;
    }
    return 0;
}

} /* extern "C" */
