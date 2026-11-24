#include "battle/BtlUiGlobal.h"

/* Checks whether the slot's position marker is active or has a queued request. */
extern "C" u32 btlUiPositionMarkerIsBusy(u32 unused, s32 slot)
{
    BtlUiA *ui = g_btlUi.ui;
    if (!ui) {
        return 0;
    }
    if (ui->objD.positionMarkers.markers[slot].active) {
        return 1;
    }
    for (s32 index = 0; index < ui->positionRequests.counts[slot]; ++index) {
        if (ui->positionRequests.rows[slot].entries[index].active) {
            return 1;
        }
    }
    return 0;
}
