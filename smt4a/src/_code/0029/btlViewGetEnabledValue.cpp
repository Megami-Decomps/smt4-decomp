#include "battle/btlView.h"

extern "C" {

extern BattleViewState g_battleViewState;
bool gameFlagIsSet(u32 flag);
f32 btlViewGetEnabledValue(void)
{
    if (gameFlagIsSet(0x4D0)) {
        return g_battleViewState.value;
    }
    return 0.0f;
}

} /* extern "C" */
