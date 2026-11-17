/* NON_MATCHING: animation-group indexing swaps the r3/ip scratch-register allocation. */
/* Reports an active number popup in an enabled battle UI slot or one of its markers. */
#include "battle/BtlUiGlobal.h"

extern "C" {
u32 FUN_003adb34(u32 unused, s32 group)
{
    BtlUi *ui = g_btlUi.ui;
    if (ui != NULL && !ui->objD.numbers.slots[group].disabled) {
        if (ui->objD.numbers.slots[group].active) {
            return 1;
        }
        s32 count = ui->objD.animationCounts.counts[group];
        for (s32 i = 0; count > i; ++i) {
            if (ui->objD.animationMarkers.rows[group].entries[i].active) {
                return 1;
            }
        }
    }
    return 0;
}
}
