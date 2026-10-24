#include "common.h"

/* The part of the map block that holds the pending flag slots (8 slots). */
struct MapBlockFlagView {
    /* 0xDE3 */ u8 unk000[0xDE3];
    /* 0xDE3 */ s8 count;
    /* 0xDE4 */ u8 active[16];
    /* 0xDF4 */ s16 flag[8];
    /* 0xE04 */ s16 key[8];
};

extern "C" {

void gameFlagSetValue(s32 flag, s32 value, s32 mode);
MapBlockFlagView *gameGetMapBlock(void);

/* Retires the pending flag slots keyed `key`: deactivates each and raises its game flag. */
void mapFlagSlotsRetireByKey(s32 key)
{
    MapBlockFlagView *block = gameGetMapBlock();

    for (s32 i = 0; i < block->count; i++) {
        if (block->active[i] != 0 && block->key[i] == key) {
            block->active[i] = 0;
            if (block->flag[i] != 0) {
                gameFlagSetValue(block->flag[i], 1, 1);
            }
        }
    }
}

} /* extern "C" */
