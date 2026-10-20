/* NON_MATCHING: `mov r3, #1` is scheduled before the divisions and `cmp r5, #0` after the shift; retail has them the other way round. */
#include "common.h"

extern "C" {

typedef struct MapBlock {
    /* 0x000 */ u8 unk000[0x744];
    /* 0x744 */ u32 flags;    /* first of the flag words, one bit per flag */
} MapBlock;

extern MapBlock *gameGetMapBlock(void);

/* Sets or clears bit `index` of the map block's flag words. */
void FUN_002df824(s32 index, s32 value)
{
    MapBlock *word = (MapBlock *)((u8 *)gameGetMapBlock() + index / 32 * 4);
    u32 bits = word->flags;
    u32 mask = 1 << (index % 32);

    if (value != 0) {
        bits |= mask;
    } else {
        bits &= ~mask;
    }
    word->flags = bits;
}

}
