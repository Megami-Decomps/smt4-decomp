#include "battle/BtlUiGlobal.h"
#include "battle/BtlPositionedRequests.h"

extern "C" {
/* Reports an active number popup in an enabled battle UI slot or one of its markers. */
u32 FUN_003adb34(u32 unused, s32 group)
{
    BtlUi *ui = g_btlUi.ui;
    if (ui != NULL && !ui->objD.numbers.slots[group].disabled) {
        if (ui->objD.numbers.slots[group].active) {
            return 1;
        }
        for (s32 i = 0; i < ui->objD.animationCounts.counts[group]; ++i) {
            if (ui->objD.animationMarkers.rows[group].entries[i].active) {
                return 1;
            }
        }
    }
    return 0;
}
}
