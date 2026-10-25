#include "shard/Shard0033.h"
#include "util/FUN_002a7410.h"

extern "C" {

extern ObjBRef g_gameGlobals;

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
