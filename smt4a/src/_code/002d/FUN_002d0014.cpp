#include "battle/btlView.h"

extern "C" {
s32 gameFlagIsSet(u32 flag);
extern BattleViewState g_battleViewState;

s32 FUN_002d0014(void)
{
    if (gameFlagIsSet(0x4D0) == 0)
        return 0;
    return g_battleViewState.unk2c == 9;
}
}
