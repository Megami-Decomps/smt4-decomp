/* Clears the two mode bits (5-6) of entry `index` in the global table. */
#include "common.h"

extern "C" {

typedef struct Entry {
    /* 0x00 */ u8 flags;
    /* 0x01 */ u8 unk01[3];
} Entry;

typedef struct Table {
    /* 0x000 */ u8 unk000[0x2A0];
    /* 0x2A0 */ Entry entries[1];
} Table;

extern Table *FUN_001ab940(void);

void FUN_00417de8(s32 index)
{
    FUN_001ab940()->entries[index].flags &= ~0x60;
}

}
