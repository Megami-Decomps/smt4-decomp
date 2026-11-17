#include "gamedata/MapSaveBlockA.h"

extern "C" {

s32 gameFlagsTestSecondBank(s32 index)
{
    MapSaveBlockA *work = gameFlagsGetBlock();
    s32 word = index / 32;
    s32 shift = index % 32;

    return (work->savedFlagBits[word] & (1u << shift)) != 0;
}

} /* extern "C" */
