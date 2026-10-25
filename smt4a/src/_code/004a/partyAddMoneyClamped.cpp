#include "shard/W6_W6Match4_PartyWallet.h"
#include "gamedata/PartyMoney.h"


extern "C" {
u8 *gameGetSlotTable();
void FUN_00408184(s32 index, u32 amount);
void countersRaiseA(s32 index, u32 value);

s32 partyAddMoneyClamped(s32 amount)
{
    PartyWallet *wallet = (PartyWallet *)gameGetSlotTable();
    s32 money = wallet->money + amount;
    wallet->money = money;
    if (amount > 0) {
        FUN_00408184(0, amount);
        money = wallet->money;
    }
    wallet->money = money > 0 ? money : 0;
    wallet->money = wallet->money > 999999999 ? 999999999 : wallet->money;
    countersRaiseA(0x19, wallet->money);
    return wallet->money;
}
}
