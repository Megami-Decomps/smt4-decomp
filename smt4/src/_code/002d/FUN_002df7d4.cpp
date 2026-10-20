/* NON_MATCHING: the shift base 1 is materialised before the divisions (mov r2, #1); retail makes it after the word load (mov r1, #1) and uses r2 for the shift count. */
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
    s32 bit = index % 32;

    return (map->flags[index / 32] & (1 << bit)) != 0;
}

}
