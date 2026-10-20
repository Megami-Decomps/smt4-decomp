#include "shard/GameOptions.h"

extern "C" {

extern GameOptions *gameGetOptions(void);

void FUN_0028ee90(void)
{
    GameOptions *options = gameGetOptions();

    options->flags = options->flags | 1;
    options->unk46 = 0;
    options->unk604 = 0;
}

} /* extern "C" */
