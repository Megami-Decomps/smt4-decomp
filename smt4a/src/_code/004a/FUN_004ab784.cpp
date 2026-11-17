/* Battle UI unit slots: the busy state of each action slot. */
#include "battle/BtlUiGlobal.h"

extern "C" {

/* Returns 1 when no action slot is in a busy state (1..4). */
u32 FUN_004ab784(void)
{
    BtlUiA *ui = g_btlUi.ui;

    if (ui != NULL) {
        for (s32 i = 0; i < 12; i += 2) {
            u32 first = ui->actionRequests.slots[i].state;
            if (first - 1 < 4) {
                return 0;
            }
            u32 second = ui->actionRequests.slots[i + 1].state;
            if (second - 1 < 4) {
                return 0;
            }
        }
    }
    return 1;
}

} /* extern "C" */
