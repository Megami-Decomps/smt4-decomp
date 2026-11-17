#include "gamedata/MapSaveBlockA.h"
#include "gamedata/FlagBitTests.h"

extern "C" {

/* Signed byte `index` of the flag value table in the game flags block. */
s8 gameFlagsValueGet(s32 index)
{
    return (s8)gameFlagsGetBlock()->placeStates[index]; /* read signed here */
}

} /* extern "C" */
