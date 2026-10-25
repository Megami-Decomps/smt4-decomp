#include "common.h"
#include "gamedata/GameFlags.h"

extern "C" {

s32 scrGetArg(u32 index);


/* Script command: sets the game flag in argument zero to one. */
s32 scrCommSetGameFlagOn(void)
{
    gameFlagSetValue(scrGetArg(0), 1, 1);
    return 1;
}

} /* extern "C" */
