#include "common.h"
#include "game/GameGlobalsRef.h"

extern "C" {

/* Returns the game session's state byte (0x137C), or 0 without a session. */
s32 gameGlobalsGetState(void)
{
    ObjB *session = g_gameGlobals.instance;
    return session != NULL ? session->sessionSelection.state : 0;
}

} /* extern "C" */
