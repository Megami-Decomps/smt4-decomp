/* NON_MATCHING: The widget pointer is retained across configuration instead of recomputed for the final call. */
#include "battle/BtlUiGlobal.h"

extern "C" {
void memFill8(void *destination, u32 value);
u16 btlTurnOrderRankOf(void *owner, u32 index); // declcheck: local (the shared declaration does not compile here or changes this unit)
void btlUiCopyIdList(BtlUiObjC *window, BtlUiSettings *settings);
void FUN_002dc464(BtlUiObjC *window);
void FUN_002e439c(BtlUiObjC *window);

/* Initializes all four slot ranks, applies them to the window, and selects its opening operation. */
void FUN_003ae720(void *unused, s32 immediate)
{
    BtlUi *ui = g_btlUi.ui;
    memFill8(&ui->settings, 0xFFFFFFFF);
    ui->settings.slotRanks[0] = btlTurnOrderRankOf(ui->owner, 0);
    ui->settings.slotRanks[1] = btlTurnOrderRankOf(ui->owner, 1);
    ui->settings.slotRanks[2] = btlTurnOrderRankOf(ui->owner, 2);
    ui->settings.slotRanks[3] = btlTurnOrderRankOf(ui->owner, 3);
    btlUiCopyIdList(&ui->objC, &ui->settings);
    if (immediate != 0) {
        FUN_002dc464(&ui->objC);
    } else {
        FUN_002e439c(&ui->objC);
    }
}
}
