#include "shard/GameOptions.h"
#include "gamedata/GameFlags.h"

extern "C" {


extern GameOptions *gameGetSupportUnitData(void);

void FUN_00256124(void)
{
    GameOptions *options = gameGetSupportUnitData();

    if ((options->flags & 1) != 0) {
        if (options->unk46 == 0x2a3) {
            gameFlagSetValue(0x262, 0, 1);
        }
        if (options->unk46 == 0x2a5) {
            gameFlagSetValue(0x263, 0, 1);
        }
        options->unk46 = 0;
    }
}

} /* extern "C" */
