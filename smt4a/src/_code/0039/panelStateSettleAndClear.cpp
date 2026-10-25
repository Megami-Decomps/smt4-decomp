#include "shard/Shard0039.h"
#include "gamedata/PartyMoney.h"

extern "C" {

extern u32 g_btlMessageFlagMasks;
extern s32 panelStateIs0(void);

s32 panelStateSettleAndClear(void)
{
    s32 result = panelStateIs0();

    if (result == 1) {
        partyAddMoneyClamped(g_btlMessageFlagMasks);
        g_btlMessageFlagMasks = 0;
    }
    return result;
}

} /* extern "C" */
