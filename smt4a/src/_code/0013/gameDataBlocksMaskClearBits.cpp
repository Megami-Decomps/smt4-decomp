#include "common.h"
#include "gamedata/GameDataAccess_Smt4a.h"
#include "gamedata/GameSaveBlocks.h"

extern "C" {


/* Clears `bits` from the flags and records whether none is left. */
void gameDataBlocksMaskClearBits(u32 bits)
{
    g_gameDataBlocks.flags &= ~bits;
    g_gameDataBlocks.noFlags = g_gameDataBlocks.flags == 0;
}

} /* extern "C" */
