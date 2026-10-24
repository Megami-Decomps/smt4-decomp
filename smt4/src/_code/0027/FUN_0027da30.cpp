/* NON_MATCHING: register allocation only (retail uses r0 for the NULL result and r2-r6 for the walk, the build r0/r2-r5); instruction sequence is the same. */
#include "battle/ListedEntry.h"

/* A battle entry seen through its list of ids at +8 (up to 0x32, ended by a negative one) and the block at +0xCC. */
struct IdListEntry {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s16 ids[0x32];
    /* 0x6C */ u8 unk6C[0x60];
    /* 0xCC */ u8 block[0x1BC];
};

struct IdListState {
    /* 0x0000 */ u8 unk0000[0x1fc0];
    /* 0x1FC0 */ IdListEntry *entries;
};

extern "C" {

/* Returns the block (+0xCC) of the first battle entry whose id list contains `id`, or NULL. */
u8 *FUN_0027da30(IdListState *battle, s32 id)
{
    for (s32 i = 0; i < 109; i++) {
        for (s32 j = 0; j < 0x32; j++) {
            s32 value = battle->entries[i].ids[j];
            if (value < 0) {
                break;
            }
            if (value == id) {
                return battle->entries[i].block;
            }
        }
    }
    return NULL;
}

} /* extern "C" */
