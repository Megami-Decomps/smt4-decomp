#include "common.h"
#include "shard/SaveWork.h"

extern "C" {

typedef struct MapBlock {
    /* 0x000 */ u8 unk000[0x744];
    /* 0x744 */ u32 flags[1]; /* flag bit set, indexed from 0 */
} MapBlock;

/* Sets or clears bit `index` of the map block's flag words. */
void FUN_002df824(s32 index, s32 value)
{
    MapBlock *block = (MapBlock *)gameGetMapBlock();
    s32 word = index / 32;

    if (value != 0) {
        block->flags[word] |= 1 << (index % 32);
    } else {
        block->flags[word] &= ~(1 << (index % 32));
    }
}

}
