/* NON_MATCHING: retail argument packing or conditional store scheduling differs. */
#include "common.h"

struct MapBlock {
    /* 0x000 */ u8 unk00[0xd5c];
    /* 0xd5c */ s16 values[46];
};
extern "C" {
MapBlock *gameGetMapBlock();
s32 scrGetArg(s32 index);
/* Stores a script value in the map block's indexed field. */
s32 FUN_0031c1fc()
{
    MapBlock *map = gameGetMapBlock();
    s32 value = scrGetArg(1);
    s32 index = scrGetArg(0);
    map->values[index] = value;
    return 1;
}
}
