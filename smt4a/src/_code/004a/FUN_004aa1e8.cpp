/* NON_MATCHING: the availability row now matches (flag at +0x4C of a 0xA0-byte row, add #0xB600); retail hoists slot*640 out of the unrolled cell loop and keeps slot*5 in r5, the build indexes (slot*32 + i)*20. */
#include "common.h"
#include "battle/btlUI.h"

extern "C" {
extern BtlUiGlobalsA g_btlUi;

u32 FUN_004aa1e8(u32 unused, s32 slot)
{
    const BtlUiA *ui = g_btlUi.ui;
    if (ui == 0)
        return 0;

    const BtlUiAvailabilityRowA *row = &ui->objD.availability.rows[slot];
    if (row->active != 0)
        return 1;

    const s32 count = ui->availabilityCounts.counts[slot];
    for (s32 i = 0; i < count; ++i) {
        if (ui->availabilityCells.cells[slot * 32 + i].active != 0)
            return 1;
    }
    return 0;
}
}
