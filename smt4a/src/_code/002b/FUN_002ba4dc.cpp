#include "common.h"

extern "C" {

struct FlagBlock {
    /* 0x000 */ u8 unk000[0xe17];
    /* 0xe17 */ s8 entryCount;
    /* 0xe18 */ u8 unke18[0x15f4 - 0xe18];
    /* 0x15f4 */ s8 active[0x50];
    /* 0x1644 */ s16 ids[1];
};

FlagBlock *gameFlagsGetBlock(void);

/* Returns whether an active entry with `id` exists. */
u32 FUN_002ba4dc(s32 id)
{
    FlagBlock *block = gameFlagsGetBlock();
    s32 i = 0;
    while (i < block->entryCount) {
        if (block->active[i] != 0 && block->ids[i] == id) {
            return 1;
        }
        i++;
    }
    return 0;
}

} /* extern "C" */
