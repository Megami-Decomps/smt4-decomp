#include "common.h"
#include "game/GameGlobalsRef.h"

extern "C" {

/* Returns whether there is a game record. */
u8 gameRecordExists(void)
{
    return g_gameGlobals.instance != NULL;
}

} /* extern "C" */
