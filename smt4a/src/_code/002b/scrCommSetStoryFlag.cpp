#include "common.h"
#include "gamedata/GameFlags.h"
#include "script/ScriptArgs.h"

extern "C" {



// Script command: set the story flag given by the argument, plus the follow-up flags tied to a few of them.
u32 scrCommSetStoryFlag(void)
{
    s32 flag = scrGetArg(0);
    gameFlagSetValue(flag, 1, 1);
    if (flag == 0x206) {
        gameFlagSetValue(0x593, 1, 1);
    }
    if (flag == 0x18b) {
        gameFlagSetValue(0x11f9, 1, 1);
    }
    if (flag == 0x1a6) {
        gameFlagSetValue(0x11f9, 1, 1);
    }
    return 1;
}

} /* extern "C" */
