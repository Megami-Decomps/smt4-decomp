#include "common.h"
#include "shard/SaveWork.h"

struct MapBlock {
    /* 0x000 */ u8 unk00[0xd5c];
    /* 0xd5c */ s16 values[46];
};
extern "C" {
s32 scrGetArg(s32 index);
/* Stores a script value in the map block's indexed field. */
s32 FUN_0031c1fc()
{
    MapBlock *map = reinterpret_cast<MapBlock *>(gameGetMapBlock());
    map->values[scrGetArg(0)] = scrGetArg(1);
    return 1;
}
}
