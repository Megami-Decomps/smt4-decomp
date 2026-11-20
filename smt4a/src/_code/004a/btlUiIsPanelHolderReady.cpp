#include "common.h"
#include "battle/BtlUiGlobal.h"
#include "shard/W6_W6Match8_BattleDebug.h"

extern "C" {

u8 btlUiObjCStateIsNotFourteen(void *holder);

/* Returns 1 when there is no battle UI, otherwise btlUiObjCStateIsNotFourteen's result for its objC. */
u8 btlUiIsPanelHolderReady(BtlUiA *arg0)
{
    BtlUiA *ui = g_btlUi.ui;

    if (ui == NULL) {
        return 1;
    }
    return btlUiObjCStateIsNotFourteen(&ui->objC);
}

} /* extern "C" */
