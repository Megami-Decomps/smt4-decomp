#include "shard/Shard0033.h"
#include "code/Code002a.h"
#include "game/GameGlobalsRef.h"

extern "C" {

/* Returns whether the game state exists and has its 0x1374 flag set. */
u32 FUN_002a7410(void)
{
    ObjB *state = g_gameGlobals.instance;

    if (state != NULL) {
        return state->unk1374 != 0;
    }
    return 0;
}

} /* extern "C" */
