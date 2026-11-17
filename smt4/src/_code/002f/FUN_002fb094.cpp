#include "gamedata/MapSaveBlock.h"
#include "gamedata/FlagBitTests.h"

extern "C" {
u32 FUN_002fb094(s32 bit)
{
    MapSaveBlock *map = gameGetMapBlock();
    s32 word = bit / 32;
    s32 shift = bit % 32;
    u32 bits = map->eventBits[word];
    return (bits & (1 << shift)) != 0;
}
}
