#include "common.h"

extern "C" {

int FUN_0015efec(u32 value);

typedef struct Entry {
    /* 0x00 */ u8 unk00[0x68];
    /* 0x68 */ u32 unk68;
} Entry;

typedef struct Table {
    /* 0x0000 */ u8 unk0000[0x15DC];
    /* 0x15DC */ Entry *entries[0x18];
} Table;

void FUN_0015dfdc(Table *table)
{
    s32 i = 0;

    do {
        FUN_0015efec(table->entries[i]->unk68);
        i++;
    } while (i < 0x18);
}

} /* extern "C" */
