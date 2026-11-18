/* Request sequence state 8 when the game-state flag is set or the shared selector is present. */
#include "common.h"
#include "shard/W6_W6Match2_EntrySequence.h"
#include "game/GameState.h"

extern "C" {




u32 FUN_002d8db4(void)
{
    if (g_gameState.map.savedLocationSet != 0 || g_mapSelection.selection.group != -1) {
        asdSequenceRequest(8, NULL, 0);
    }
    return 1;
}

}
