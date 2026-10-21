#include "shard/W5_W5Match5_BattleViewState.h"

extern "C" {

extern BattleViewState g_battleViewState;
bool gameFlagIsSet(u32 flag);
f32 FUN_002921d8(void)
{
    if (gameFlagIsSet(0x4D0)) {
        return g_battleViewState.value;
    }
    return 0.0f;
}

} /* extern "C" */
