#include "shard/GameOptions.h"

extern "C" {

int FUN_0028975c(int a, int b, int c);
extern GameOptions *gameGetOptions(void);

void FUN_00256124(void)
{
    GameOptions *options = gameGetOptions();

    if ((options->flags & 1) != 0) {
        if (options->unk46 == 0x2a3) {
            FUN_0028975c(0x262, 0, 1);
        }
        if (options->unk46 == 0x2a5) {
            FUN_0028975c(0x263, 0, 1);
        }
        options->unk46 = 0;
    }
}

} /* extern "C" */
