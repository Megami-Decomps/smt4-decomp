#include "shard/GameOptions.h"
#include "gamedata/GameFlags.h"

extern "C" {

extern GameOptions *gameGetSupportUnitData(void);

void FUN_002900d0(void)
{
    GameOptions *options = gameGetSupportUnitData();
    GameOptions *again;

    if (((options->flags & 1) != 0) &&
        (again = gameGetSupportUnitData(), (again->flags & 1) != 0)) {
        if (again->unk46 == 0x2a3) {
            gameFlagSetValue(0x262, 0, 1);
        }
        if (again->unk46 == 0x2a5) {
            gameFlagSetValue(0x263, 0, 1);
        }
        again->unk46 = 0;
    }
    options->flags = options->flags & 0xfffe;
    options->unk46 = 0;
    options->unk604 = 0;
}

} /* extern "C" */
