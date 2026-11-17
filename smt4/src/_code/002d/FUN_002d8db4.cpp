/* Request sequence state 8 when the game-state flag is set or the shared selector is present. */
#include "common.h"
#include "shard/W6_W6Match2_EntrySequence.h"
#include "game/GameState.h"

extern "C" {


extern s32 DAT_0049fd14;


u32 FUN_002d8db4(void)
{
    if (g_gameState.map.savedLocationSet != 0 || DAT_0049fd14 != -1) {
        asdSequenceRequest(8, NULL, 0);
    }
    return 1;
}

}
