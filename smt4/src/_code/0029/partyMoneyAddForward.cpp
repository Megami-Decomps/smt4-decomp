#include "common.h"
#include "gamedata/PartyMoney.h"

extern "C" {

void gameMoneyAdd(s32 amount);

/* Forwards to gameMoneyAdd: armlink NOPed the tail call to the next function. */
void partyMoneyAddForward(s32 amount)
{
    gameMoneyAdd(amount);
}

} /* extern "C" */
