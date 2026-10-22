#include "battle/btlView.h"

extern "C" {

extern BattleViewState g_battleViewState;
extern s32 gameFlagIsSet(u32 flag);

/* True when game flag 0x4D0 is set and the state block's state is 1. */
u32 gameFlagStateIsOne(void)
{
    if (gameFlagIsSet(0x4d0) == 0) {
        return 0;
    }
    return g_battleViewState.attachments.state == 1;
}

} /* extern "C" */
