#include "common.h"
#include "game/GameGlobalsRef.h"

extern "C" {

s32 uiSpriteGetOperationMode(void *operation);

/* Whether the game session's sprite operation (0x12DC) is in mode 15; 0 without a session. */
s32 FUN_00372014(void)
{
    ObjB *session = g_gameGlobals.instance;
    if (session == NULL) {
        return 0;
    }
    return uiSpriteGetOperationMode(session->block12DC) == 15;
}

} /* extern "C" */
