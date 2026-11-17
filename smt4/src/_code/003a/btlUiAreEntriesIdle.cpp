#include "battle/BtlUiGlobal.h"

extern "C" u32 btlUiAreEntriesIdle(u32 unused)
{
    BtlUi* ui = g_btlUi.ui;
    if (ui != NULL) {
        for (s32 index = 0; index < 12; ++index) {
            if ((u32)(ui->objD.actionRequests.slots[index].state - 1) < 4) {
                return 0;
            }
        }
    }
    return 1;
}
