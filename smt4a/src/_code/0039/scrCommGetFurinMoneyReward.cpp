#include "battle/btlView.h"
#include "gamedata/GameDataAccess_VariantG.h"

extern "C" {

extern BattleViewState g_battleViewState;
void scrSetResult(s32 result);

/* Publishes the generated money reward while the view is enabled. */
s32 scrCommGetFurinMoneyReward(void)
{
    const BattleViewState *view = gameFlagIsSet(0x4D0) ? &g_battleViewState : NULL;
    if (view == NULL) {
        return 1;
    }
    scrSetResult(view->moneyReward);
    return 1;
}

} /* extern "C" */
