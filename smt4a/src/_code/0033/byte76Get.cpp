#include "battle/btlView.h"
#include "shard/Shard0033.h"

extern "C" {

extern BattleViewState g_battleViewState;

s32 byte76Get(void)
{
    return g_battleViewState.unk76;
}

} /* extern "C" */
