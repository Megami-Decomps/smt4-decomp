/* NON_MATCHING: only quotient argument moves differ (retail moves count into r0 before columns into r1); navigation setup and final stores agree. */
#include "ui/GridNavigation.h"

extern "C" {
void rowWidgetInit(RowWidget *widget, s32 visible, u32 count);
void colorSetRgba(RowWidget *widget, u8 first, u8 second, u8 third, u8 fourth);
void objectSetRgba(RowWidget *widget, u8 first, u8 second, u8 third, u8 fourth);
void FUN_002fc248(RowWidget *widget, u32 mode);

// Configure the row and column navigation ranges, directional inputs and optional alternate keys.
void FUN_0029f848(GridNavigation *work, s32 count, s32 visibleRows, s32 columns, s32 wrap, s32 alternateKeys)
{
    if (wrap != 0 && columns > 1)
        wrap = 0;
    if (count <= 0) {
        work->empty = 1;
        return;
    }
    if (columns == 1 && visibleRows > count)
        visibleRows = count;
    work->count = count;
    work->empty = 0;
    s32 rows = count / columns;
    if (count % columns > 0)
        ++rows;
    if (wrap != 0) {
        rowWidgetInit(&work->rows, visibleRows, rows);
        colorSetRgba(&work->rows, 6, 5, 3, 4);
        if (alternateKeys != 0)
            objectSetRgba(&work->rows, 15, 14, 12, 13);
    } else {
        rowWidgetInit(&work->rows, visibleRows, rows);
        colorSetRgba(&work->rows, 6, 5, 32, 32);
        if (alternateKeys != 0)
            objectSetRgba(&work->rows, 15, 14, 32, 32);
    }
    if (visibleRows == 1 && columns > 1) {
        if (columns > count)
            columns = count;
        rowWidgetInit(&work->columns, columns, work->count);
    } else {
        rowWidgetInit(&work->columns, columns, columns);
    }
    colorSetRgba(&work->columns, 3, 4, 32, 32);
    if (alternateKeys != 0)
        objectSetRgba(&work->columns, 12, 13, 32, 32);
    work->row = 0;
    work->column = 0;
    FUN_002fc248(&work->rows, 1);
    FUN_002fc248(&work->columns, 1);
}
}
