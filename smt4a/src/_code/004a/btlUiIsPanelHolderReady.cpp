#include "common.h"
#include "battle/BtlUiGlobal.h"
#include "shard/W6_W6Match8_BattleDebug.h"

extern "C" {

u8 FUN_00270bfc(void *holder);

/* Returns 1 when there is no battle UI, otherwise FUN_00270bfc's result for its objC. */
u8 btlUiIsPanelHolderReady(u32 arg0)
{
    BtlUiA *ui = g_btlUi.ui;

    if (ui == NULL) {
        return 1;
    }
    return FUN_00270bfc(&ui->objC);
}

} /* extern "C" */
