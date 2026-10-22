#include "ui/IfTouch.h"

extern "C" {

u8 ifTouchGetSelectionMode(void)
{
    return g_ifTouch.state->selectionMode;
}

} /* extern "C" */
