#include "common.h"

extern "C" {

typedef struct MapBlock {
    /* 0x000 */ u8 unk000[0x750];
    /* 0x750 */ u32 bits[1];
} MapBlock;

extern MapBlock *gameGetMapBlock(void);

/* Sets or clears bit `bit` of the map block's flag bitmap at 0x750. */
void mapFlagsWriteBit(s32 bit, s32 on)
{
    MapBlock *block = gameGetMapBlock();
    s32 index = bit / 32;

    if (on != 0) {
        block->bits[index] |= 1 << (bit % 32);
    } else {
        block->bits[index] &= ~(1 << (bit % 32));
    }
}

} /* extern "C" */
