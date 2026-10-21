#include "shard/W5_W5Match5_BattleViewState.h"

extern "C" {

extern BattleViewState g_battleViewState;
s32 FUN_0029224c(void)
{
    if (g_battleViewState.disabled != 0) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
