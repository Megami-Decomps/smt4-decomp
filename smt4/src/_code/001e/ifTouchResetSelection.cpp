#include "ui/IfTouch.h"

extern "C" {

/* Clear the touch record's mode and counter, and invalidate its selection. */
void ifTouchResetSelection(void)
{
    IfTouchState *record = g_ifTouch.state;
    if (g_ifTouch.state != NULL) {
        record->selectedRegion = -1;
        record->selectionMode = 0;
        record->repeatCounter = 0;
    }
}

}
