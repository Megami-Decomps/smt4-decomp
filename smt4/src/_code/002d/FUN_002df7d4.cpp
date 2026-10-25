#include "common.h"

extern "C" {

typedef struct MapBlock {
    /* 0x000 */ u8 unk000[0x744];
    /* 0x744 */ u32 flags[1]; /* one bit per flag */
} MapBlock;

extern MapBlock *gameGetMapBlock(void);

/* Tests bit `index` of the map block's flag words. */
u8 FUN_002df7d4(s32 index)
{
    MapBlock *map = gameGetMapBlock();
    s32 word = index / 32;
    s32 bit = index % 32;
    u32 bits = map->flags[word];

    return (bits & (1 << bit)) != 0;
}

}
