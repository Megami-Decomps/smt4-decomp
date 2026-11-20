/* NON_MATCHING: 2D availabilityCells.rows[slot].cells[i] now hoists slot*640 out of the cell loop and matches all instructions; only register assignment differs (retail r5/ip/r4 vs built ip/r4/r5, 18 diff lines). */
#include "common.h"
#include "battle/BtlUiGlobal.h"

extern "C" {

u32 FUN_004aa1e8(u32 unused, s32 slot)
{
    const BtlUiA *ui = g_btlUi.ui;
    if (ui == 0)
        return 0;

    const BtlUiAvailabilityRowA *row = &ui->objD.availability.rows[slot];
    if (row->active != 0)
        return 1;

    for (s32 i = 0; i < ui->availabilityCounts.counts[slot]; ++i) {
        if (ui->availabilityCells.rows[slot].cells[i].active != 0)
            return 1;
    }
    return 0;
}
}
