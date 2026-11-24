#include "battle/BtlUiGlobal.h"


/* Checks whether the slot's position marker is active or has a queued request. */
extern "C" u32 btlUiPositionMarkerIsBusy(u32 unused, s32 row)
{
    BtlUi *ui = g_btlUi.ui;
    if (!ui) {
        return 0;
    }
    if (ui->objD.positionMarkers.markers[row].active) {
        return 1;
    }
    for (s32 index = 0; index < ui->objD.positionRequests.counts[row]; ++index) {
        if (ui->objD.positionRequests.rows[row].entries[index].active) {
            return 1;
        }
    }
    return 0;
}
