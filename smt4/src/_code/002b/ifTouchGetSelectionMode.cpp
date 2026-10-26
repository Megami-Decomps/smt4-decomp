#include "ui/IfTouch.h"
#include "ui/UiControl_Smt4.h"

extern "C" {

u8 ifTouchGetSelectionMode(void)
{
    return g_ifTouch.state->selectionMode;
}

} /* extern "C" */
