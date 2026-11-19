#include "gamedata/MapSaveBlock.h"

extern "C" {

/* Tests bit `index` of the map block's flag words. */
u8 gameFlagsTestFirstBank(s32 index)
{
    MapSaveBlock *map = gameGetMapBlock();
    s32 word = index / 32;
    s32 bit = index % 32;
    u32 bits = map->flagBits[word];

    return (bits & (1 << bit)) != 0;
}

}
