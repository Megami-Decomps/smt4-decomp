/* NON_MATCHING: retail hoists the compare constants 0x18b/0x1a6/0x11f9 into registers (r0/r6/r5) and shares one set-flag block; built compares with sub/subs immediates and duplicates the block. */
#include "common.h"
#include "gamedata/GameFlags.h"
#include "script/ScriptArgs.h"

extern "C" {



// Script command: set the story flag given by the argument, plus the follow-up flags tied to a few of them.
u32 FUN_002ba7b8(void)
{
    s32 flag = scrGetArg(0);
    gameFlagSetValue(flag, 1, 1);
    if (flag == 0x206) {
        gameFlagSetValue(0x593, 1, 1);
    }
    if (flag == 0x18b || flag == 0x1a6) {
        gameFlagSetValue(0x11f9, 1, 1);
    }
    return 1;
}

} /* extern "C" */
