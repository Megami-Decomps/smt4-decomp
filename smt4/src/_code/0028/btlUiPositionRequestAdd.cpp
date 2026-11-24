#include "battle/BtlUiGlobal.h"
#include "battle/BtlPositionedRequests.h"

/* Appends a position marker to the matching row or to the first empty row. */
extern "C" s32 btlUiPositionRequestAdd(BtlUi *, u8 kind, u8 mode, f32 x, f32 y, f32 z)
{
    BtlUi *ui = g_btlUi.ui;
    s32 selected = -1;
    for (s32 group = 0; group < 16; ++group) {
        s32 count = ui->objD.positionRequests.counts[group];
        if (count > 0 && count < 8) {
            if (ui->objD.positionRequests.rows[group].entries[count - 1].x == x &&
                ui->objD.positionRequests.rows[group].entries[count - 1].y == y &&
                ui->objD.positionRequests.rows[group].entries[count - 1].z == z) {
                selected = group;
                break;
            }
        }
    }
    if (selected < 0) {
        for (s32 group = 0; group < 16; ++group) {
            if (ui->objD.positionRequests.counts[group] <= 0) {
                selected = group;
                break;
            }
        }
    }
    if ((u32)selected >= 17 || ui->objD.positionRequests.counts[selected] >= 8) {
        return -1;
    } else {
        s32 count = ui->objD.positionRequests.counts[selected];
        ui->objD.positionRequests.rows[selected].entries[count].active = 1;
        ui->objD.positionRequests.rows[selected].entries[count].mode = mode;
        ui->objD.positionRequests.rows[selected].entries[count].x = x;
        ui->objD.positionRequests.rows[selected].entries[count].y = y;
        ui->objD.positionRequests.rows[selected].entries[count].z = z;
        ui->objD.positionRequests.rows[selected].entries[count].flags = kind;
        ++ui->objD.positionRequests.counts[selected];
        return selected;
    }
}
