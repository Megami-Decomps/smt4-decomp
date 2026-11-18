#include "shard/GameOptions.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {

extern GameOptions *gameGetSupportUnitData(void);

void FUN_00256194(void)
{
    GameOptions *options = gameGetSupportUnitData();

    if ((options->flags & 1) == 0) {
        if (options->unk46 == 0x4b1) {
            reinterpret_cast<int>(memClear(options, 0x604));
        }
        options->supportCandidates[0] = 0;
        options->supportCandidates[1] = 0;
        options->supportCandidates[2] = 0;
    }
}

} /* extern "C" */
