#include "common.h"

extern "C" {

void FUN_004d0d70(s32 index);

typedef struct Table {
    /* 0x00000 */ u8 unk00000[0x27E04];
    /* 0x27E04 */ u16 unk27E04[5];
} Table;

Table *gameDataBlocksGetSaveData(void);

/* Clears the halfword at 0x27E0C of the table and runs FUN_004d0d70 for each of the 0x18 entries; returns 1. */
u32 FUN_002c1408(void)
{
    Table *table;
    s32 i;
    u16 *values;

    table = gameDataBlocksGetSaveData();
    i = 0;
    values = table->unk27E04;
    values[4] = 0;
    do {
        FUN_004d0d70(i);
        i = i + 1;
    } while (i < 0x18);
    return 1;
}

} /* extern "C" */
