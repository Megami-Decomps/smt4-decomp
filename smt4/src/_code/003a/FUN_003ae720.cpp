/* NON_MATCHING: The widget pointer is retained across configuration instead of recomputed for the final call. */
#include "battle/btlUI.h"

extern "C" {
extern BtlUiGlobals g_btlUi;
void memFill8(void *destination, u32 value);
u16 slotFindNonnegativeRank(void *owner, u32 index);
void FUN_002ad8a8(BtlUiObjC *window, BtlUiSettings *settings);
void FUN_002dc464(BtlUiObjC *window);
void FUN_002e439c(BtlUiObjC *window);

/* Initializes all four slot ranks, applies them to the window, and selects its opening operation. */
void FUN_003ae720(void *unused, s32 immediate)
{
    BtlUi *ui = g_btlUi.ui;
    memFill8(&ui->settings, 0xFFFFFFFF);
    ui->settings.slotRanks[0] = slotFindNonnegativeRank(ui->owner, 0);
    ui->settings.slotRanks[1] = slotFindNonnegativeRank(ui->owner, 1);
    ui->settings.slotRanks[2] = slotFindNonnegativeRank(ui->owner, 2);
    ui->settings.slotRanks[3] = slotFindNonnegativeRank(ui->owner, 3);
    FUN_002ad8a8(&ui->objC, &ui->settings);
    if (immediate != 0) {
        FUN_002dc464(&ui->objC);
    } else {
        FUN_002e439c(&ui->objC);
    }
}
}
