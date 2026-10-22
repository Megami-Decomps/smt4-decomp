#include "ui/IfTouch.h"

extern "C" {

/* Resets the record at 0x57F248 (if there is one): id 0xFFFF, mode 0, counter 0. */
void ifTouchResetRecord(void)
{
    IfTouchState *record;

    record = g_ifTouch.state;
    if (g_ifTouch.state != NULL) {
        record->selectedRegion = 0xFFFF;
        record->selectionMode = 0;
        record->repeatCounter = 0;
    }
}

} /* extern "C" */
