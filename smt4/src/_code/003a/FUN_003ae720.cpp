#include "battle/BtlUiGlobal.h"

extern "C" {
void memFill8(void *destination, u32 value);
u16 btlTurnOrderRankOf(void *owner, u32 index); // declcheck: local (the shared declaration does not compile here or changes this unit)
void btlUiCopyIdList(BtlUiObjC *window, BtlUiSettings *settings);
void FUN_002dc464(BtlUiObjC *window);
void FUN_002e439c(BtlUiObjC *window);

/* btlUiRefreshSlotRanks's body, inlined here: loads the four slot ranks and applies them to the window. */
static __inline void refreshSlotRanks(void)
{
    BtlUi *context = g_btlUi.ui;

    memFill8(&context->settings, 0xFFFFFFFF);
    context->settings.slotRanks[0] = btlTurnOrderRankOf(context->owner, 0);
    context->settings.slotRanks[1] = btlTurnOrderRankOf(context->owner, 1);
    context->settings.slotRanks[2] = btlTurnOrderRankOf(context->owner, 2);
    context->settings.slotRanks[3] = btlTurnOrderRankOf(context->owner, 3);
    btlUiCopyIdList(&context->objC, &context->settings);
}

/* Initializes all four slot ranks, applies them to the window, and selects its opening operation. */
void FUN_003ae720(void *unused, s32 immediate)
{
    BtlUi *ui = g_btlUi.ui;

    refreshSlotRanks();
    if (immediate != 0) {
        FUN_002dc464(&ui->objC);
    } else {
        FUN_002e439c(&ui->objC);
    }
}
}
