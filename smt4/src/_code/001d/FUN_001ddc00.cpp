#include "common.h"
#include "game/GameGlobalsRef.h"

extern "C" {

/* Returns the optional game data's status byte (0x1E64), or 0 without game data. */
s32 FUN_001ddc00(void)
{
    s32 result = 0;
    if (g_gameGlobals.data != NULL) {
        result = g_gameGlobals.data->unk1E64;
    }
    return result;
}

} /* extern "C" */
