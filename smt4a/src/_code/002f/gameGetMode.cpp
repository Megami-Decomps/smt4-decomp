#include "common.h"
#include "game/GameGlobalsRef.h"

extern "C" {

/* Returns the game session's mode byte (0x2014), sign-extended. */
s32 gameGetMode(void)
{
    return g_gameGlobals.instance->mode;
}

}
