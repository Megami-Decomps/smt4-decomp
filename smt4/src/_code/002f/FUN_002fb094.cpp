#include "common.h"

namespace { struct Map { u8 padding[0xe58]; u32 flags[32]; }; }

extern "C" {
Map *gameGetMapBlock(void);
u32 FUN_002fb094(s32 bit)
{
    Map *map = gameGetMapBlock();
    s32 word = bit / 32;
    s32 shift = bit % 32;
    u32 bits = map->flags[word];
    return (bits & (1 << shift)) != 0;
}
}
