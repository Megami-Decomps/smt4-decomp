#include "common.h"
#include "gamedata/GameFlags.h"

extern "C" {


s32 scrGetArg(s32 index);

/* Script command: sets the game flag given by the first argument. */
u32 FUN_0020ebc4(void)
{
    gameFlagSetValue(scrGetArg(0), 0, 1);
    return 1;
}

} /* extern "C" */
