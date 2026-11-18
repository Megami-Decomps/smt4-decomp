#include "common.h"
#include "shard/W6_W6Match2_EntrySequence.h"
#include "game/GameState.h"

namespace { struct State { u8 padding[0x2f8]; u8 blocked; }; }

extern "C" {
u32 FUN_002cdbbc(void)
{
    if (g_gameState.map.savedLocationSet != 0 || g_mapSelection.selection.group != -1) { asdSequenceRequest(6, NULL, 0); }
    return 1;
}
}
