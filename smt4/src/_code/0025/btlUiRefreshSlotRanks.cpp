/* Loads the four setting values from the owner's table into the context and refreshes dependent state. */
#include "battle/BtlUiGlobal.h"

extern "C" {


extern void memFill8(BtlUiSettings *settings, s32 arg);
extern u16 btlTurnOrderRankOf(u32 owner, s32 index); // declcheck: local (the shared declaration does not compile here or changes this unit)
extern void btlUiCopyIdList(void *dest, BtlUiSettings *settings);

void btlUiRefreshSlotRanks(BtlUi *) /* every caller passes g_btlUiBlock; the body reads the global */
{
    BtlUi *context = g_btlUi.ui;

    memFill8(&context->settings, -1);
    context->settings.slotRanks[0] = btlTurnOrderRankOf(reinterpret_cast<u32>(context->owner), 0);
    context->settings.slotRanks[1] = btlTurnOrderRankOf(reinterpret_cast<u32>(context->owner), 1);
    context->settings.slotRanks[2] = btlTurnOrderRankOf(reinterpret_cast<u32>(context->owner), 2);
    context->settings.slotRanks[3] = btlTurnOrderRankOf(reinterpret_cast<u32>(context->owner), 3);
    btlUiCopyIdList(&context->objC, &context->settings);
}

}
