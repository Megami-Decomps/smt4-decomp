#include "common.h"

extern "C" {

/* Block with a signed slot count at 0xde3, per-slot active flags at 0xde4 and per-slot ids at 0xe04. */
typedef struct {
    u8 unk00[0xde3];
    s8 count;           /* 0xde3 */
    u8 active[0x20];    /* 0xde4 */
    s16 ids[1];         /* 0xe04 */
} SlotBlock;

SlotBlock *gameGetMapBlock(void);

/* Returns 1 when an active slot holds `id`, else 0. */
u32 FUN_001fc2b0(int id)
{
    SlotBlock *block = gameGetMapBlock();
    int i = 0;

    if (i < block->count) {
        do {
            if (block->active[i] != 0 && block->ids[i] == id) {
                return 1;
            }
            i++;
        } while (i < block->count);
    }
    return 0;
}

} /* extern "C" */
