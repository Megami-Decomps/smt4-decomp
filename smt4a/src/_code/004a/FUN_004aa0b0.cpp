/* NON_MATCHING: position entry pointer materialization and full-row failure branch layout differ. */
#include "battle/btlUI.h"

extern "C" {
extern BtlUiGlobalsA g_btlUi;

/* Append to the row ending at this position, otherwise use the first empty row. */
u32 FUN_004aa0b0(u32 request, u8 flags, u8 mode, f32 x, f32 y, f32 z)
{
    BtlUiA *ui = g_btlUi.ui;
    s32 row = -1;
    for (s32 i = 0; i < 16; ++i) {
        s32 count = ui->availabilityCounts.counts[i];
        if (static_cast<u32>(count - 1) < 31) {
            const BtlUiPositionRequest *previous = &ui->positionRequests.rows[i].entries[count - 1];
            if (previous->x == x && previous->y == y && previous->z == z) {
                row = i;
                break;
            }
        }
    }
    if (row < 0) {
        for (s32 i = 0; i < 16; ++i) {
            if (ui->availabilityCounts.counts[i] <= 0) {
                row = i;
                break;
            }
        }
    }
    if (static_cast<u32>(row) < 17 && ui->availabilityCounts.counts[row] < 32) {
        BtlUiPositionRequest *entry = &ui->positionRequests.rows[row].entries[ui->availabilityCounts.counts[row]];
        entry->active = 1;
        entry->mode = mode;
        entry->x = x;
        entry->y = y;
        entry->z = z;
        entry->flags = flags;
        ++ui->availabilityCounts.counts[row];
        return row;
    }
    return -1;
}
}
