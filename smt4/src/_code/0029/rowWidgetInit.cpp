/* NON_MATCHING: retail performs the same word stores, but keeps the reset zero in ip and schedules
 * the parameter store before the clears and the final flags store after the visible-row clamp. */
#include "ui/GridNavigation.h"

/* Sets up a row navigation widget and clamps the visible row count to zero or more. */
extern "C" void rowWidgetInit(RowWidget *widget, s32 visible, u32 count)
{
    widget->parameter = count;
    widget->flags = 0;
    widget->packedKeys = 0;
    widget->packedAlternateKeys = 0;
    widget->unk0c = 0;
    widget->unk20 = 0;
    widget->rowCount = visible;
    widget->mode = 2;
    widget->unk24 = 0;
    widget->visibleRows = visible;
    if (widget->visibleRows <= 0) {
        widget->visibleRows = 0;
    }
    widget->flags = 6;
}
