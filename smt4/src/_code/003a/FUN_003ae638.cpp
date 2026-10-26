/* NON_MATCHING: cell-column addresses require extra arithmetic and an extra literal; count/base registers differ from retail. */
#include "battle/btlUI.h"

extern "C" BtlUiGlobals g_btlUi;

/* Check whether the UI row itself or any of its listed cells is active. */
extern "C" u32 FUN_003ae638(u32 unused, s32 row)
{
    BtlUi *ui = g_btlUi.ui;
    if (!ui) {
        return 0;
    }
    if (ui->objD.availability.rows[row].active) {
        return 1;
    }
    BtlUiAvailabilityCellRow *cellRow = &ui->objD.availabilityCells.rows[row];
    for (s32 index = 0; index < ui->objD.availabilityCounts.counts[row]; ++index) {
        if (cellRow->cells[index].active) {
            return 1;
        }
    }
    return 0;
}
