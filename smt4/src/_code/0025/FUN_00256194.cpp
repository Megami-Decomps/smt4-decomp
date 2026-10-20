#include "shard/GameOptions.h"

extern "C" {

int memClear(void *ptr, int size);
extern GameOptions *gameGetOptions(void);

void FUN_00256194(void)
{
    GameOptions *options = gameGetOptions();

    if ((options->flags & 1) == 0) {
        if (options->unk46 == 0x4b1) {
            memClear(options, 0x604);
        }
        options->unk60A = 0;
        options->unk60C = 0;
        options->unk60E = 0;
    }
}

} /* extern "C" */
