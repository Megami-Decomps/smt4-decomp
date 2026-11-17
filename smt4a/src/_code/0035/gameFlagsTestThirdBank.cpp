#include "gamedata/MapSaveBlockA.h"

extern "C" {

s32 gameFlagsTestThirdBank(s32 index)
{
    MapSaveBlockA *work = gameFlagsGetBlock();
    s32 word = index / 32;
    s32 bit = index % 32;
    u32 bits = work->thirdBits[word];
    return (bits & (1 << bit)) != 0;
}

} /* extern "C" */
