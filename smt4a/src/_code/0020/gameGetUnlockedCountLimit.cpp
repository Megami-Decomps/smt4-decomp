#include "common.h"
#include "gamedata/GameDataAccess_VariantG.h"
#include "gamedata/GameDataAccess.h"

extern "C" {


/* Returns the limit 99, or 999 when gameFlagIsSet reports 0x534 unlocked. */
s32 gameGetUnlockedCountLimit(void)
{
    s32 unlocked;
    u32 limit;

    unlocked = gameFlagIsSet(0x534);
    if (unlocked == 0) {
        limit = 99;
    } else {
        limit = 999;
    }
    return limit;
}

} /* extern "C" */
