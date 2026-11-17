#include "common.h"
#include "game/GameGlobalsRef.h"

extern "C" {
/* Whether the game data's state word (0x12E4) is set; 0 without game data. */
s32 FUN_0029e02c(void)
{
    if (g_gameGlobals.data != NULL) {
        return g_gameGlobals.data->unk12E4 != 0;
    }
    return 0;
}
}
