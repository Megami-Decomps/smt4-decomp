#include "gamedata/MapSaveBlockA.h"
#include "shard/Shard003B.h"

extern "C" {

extern s32 scrGetArg(s32 index);
extern void scrSetResult(s32 value);

/* Script command: result is whether halfword `argument 0` of the game block's table at +0xD90 is zero. */
u32 scrCommIsHalfZero(void)
{
    MapSaveBlockA *flags = gameFlagsGetBlock();
    s32 index = scrGetArg(0);

    scrSetResult(flags->timedValues[index] == 0);
    return 1;
}

} /* extern "C" */
