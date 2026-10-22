/* NON_MATCHING: Availability-row and cell address formation and paired-loop registers differ. */
#include "common.h"
#include "battle/btlUI.h"

extern "C" {
extern BtlUiGlobalsA g_btlUi;

u32 FUN_004aa1e8(u32 unused, s32 slot)
{
    const BtlUiA *ui = g_btlUi.ui;
    if (ui == 0)
        return 0;

    if (ui->objD.availability.rows[slot].active != 0)
        return 1;

    const s32 count = ui->availabilityCounts.counts[slot];
    const BtlUiAvailabilityCell *cells =
        ui->availabilityCells.cells + slot * 32;
    for (s32 i = 0; i < count; ++i) {
        if (cells[i].active != 0)
            return 1;
    }
    return 0;
}
}
