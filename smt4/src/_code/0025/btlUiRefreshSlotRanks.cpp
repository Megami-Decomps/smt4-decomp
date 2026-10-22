/* Loads the four setting values from the owner's table into the context and refreshes dependent state. */
#include "battle/btlUI.h"

extern "C" {

extern BtlUiGlobals g_btlUi;

extern void memFill8(BtlUiSettings *settings, s32 arg);
extern u16 slotFindNonnegativeRank(u32 owner, s32 index);
extern void FUN_002ad8a8(void *dest, BtlUiSettings *settings);

void btlUiRefreshSlotRanks(void)
{
    BtlUi *context = g_btlUi.ui;

    memFill8(&context->settings, -1);
    context->settings.slotRanks[0] = slotFindNonnegativeRank(reinterpret_cast<u32>(context->owner), 0);
    context->settings.slotRanks[1] = slotFindNonnegativeRank(reinterpret_cast<u32>(context->owner), 1);
    context->settings.slotRanks[2] = slotFindNonnegativeRank(reinterpret_cast<u32>(context->owner), 2);
    context->settings.slotRanks[3] = slotFindNonnegativeRank(reinterpret_cast<u32>(context->owner), 3);
    FUN_002ad8a8(&context->objC, &context->settings);
}

}
