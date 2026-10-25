#include "gamedata/PartyMoney.h"

extern "C" {

s32 partyAddMoneyClampedForward(s32 amount)
{
    return partyAddMoneyClamped(amount);
}

} /* extern "C" */
