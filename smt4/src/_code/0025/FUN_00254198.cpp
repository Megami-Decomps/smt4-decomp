/* Clears the two mode bits (5-6) of entry `index` in the global table. */
#include "common.h"

extern "C" {

typedef struct Entry {
    /* 0x00 */ u8 flags;
    /* 0x01 */ u8 unk01[3];
} Entry;

typedef struct Table {
    /* 0x000 */ u8 unk000[0x200];
    /* 0x200 */ Entry entries[1];
} Table;

extern Table *gameGetFlagBlock(void);

void FUN_00254198(s32 index)
{
    gameGetFlagBlock()->entries[index].flags &= ~0x60;
}

}
