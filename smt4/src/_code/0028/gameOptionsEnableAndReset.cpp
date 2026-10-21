#include "shard/GameOptions.h"

extern "C" {

extern GameOptions *gameGetSupportUnitData(void);

void gameOptionsEnableAndReset(void)
{
    GameOptions *options = gameGetSupportUnitData();

    options->flags = options->flags | 1;
    options->unk46 = 0;
    options->unk604 = 0;
}

} /* extern "C" */
