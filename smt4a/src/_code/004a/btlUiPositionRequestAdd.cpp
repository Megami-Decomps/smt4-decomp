#include "battle/BtlUiGlobal.h"

extern "C" {

/* Append to the row ending at this position, otherwise use the first empty row. */
u32 btlUiPositionRequestAdd(u32 request, u8 flags, u8 mode, f32 x, f32 y, f32 z)
{
    BtlUiA *ui = g_btlUi.ui;
    s32 row = -1;
    s32 i;
    for (i = 0; i < 16; ++i) {
        s32 count = ui->availabilityCounts.counts[i];
        if (static_cast<u32>(count - 1) < 31) {
            if (ui->positionRequests.rows[i].entries[count - 1].x == x && ui->positionRequests.rows[i].entries[count - 1].y == y &&
                ui->positionRequests.rows[i].entries[count - 1].z == z) {
                row = i;
                break;
            }
        }
    }
    if (row < 0) {
        for (i = 0; i < 16; ++i) {
            if (ui->availabilityCounts.counts[i] <= 0) {
                row = i;
                break;
            }
        }
    }
    if (static_cast<u32>(row) >= 17) {
        return -1;
    }
    if (ui->availabilityCounts.counts[row] >= 32) {
        return -1;
    }
    s32 index = ui->availabilityCounts.counts[row];
    ui->positionRequests.rows[row].entries[index].active = 1;
    ui->positionRequests.rows[row].entries[index].mode = mode;
    ui->positionRequests.rows[row].entries[index].x = x;
    ui->positionRequests.rows[row].entries[index].y = y;
    ui->positionRequests.rows[row].entries[index].z = z;
    ui->positionRequests.rows[row].entries[index].flags = flags;
    ++ui->availabilityCounts.counts[row];
    return row;
}
}
