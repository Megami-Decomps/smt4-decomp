#include "common.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "game/GameGlobalsRef.h"

extern "C" {

/* Returns the low byte of the game data's restore-tab word (0x12e8), sign-extended. */
s8 gameGetFlagByte12e8(void)
{
    return (s8)g_gameGlobals.data->restoreTabPending;
}

} /* extern "C" */
