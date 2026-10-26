#include "ui/IfTouch.h"
#include "ui/UiControl_Smt4a.h"

extern "C" {

/* Returns the byte at 0x8 of the record at 0x57F248. */
u8 ifTouchGetSelectionMode(void)
{
    return g_ifTouch.state->selectionMode;
}

} /* extern "C" */
