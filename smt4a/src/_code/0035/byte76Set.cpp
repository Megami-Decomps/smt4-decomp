#include "battle/btlView.h"
#include "shard/Shard0035.h"

extern "C" {

extern BattleViewState g_battleViewState;

void byte76Set(s8 value)
{
    g_battleViewState.unk76 = value;
}

} /* extern "C" */
