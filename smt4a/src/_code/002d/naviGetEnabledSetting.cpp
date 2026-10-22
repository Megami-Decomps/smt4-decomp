#include "battle/btlView.h"
extern "C" {
s32 gameFlagIsSet(u32 flag);
extern BattleViewState g_battleViewState;
/* Reads the navigation setting only while its feature flag is enabled. */
s32 naviGetEnabledSetting(void)
{
    if (gameFlagIsSet(0x4D0))
        return g_battleViewState.navigationSetting;
    return 0;
}
}
