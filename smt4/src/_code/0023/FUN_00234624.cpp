#include "common.h"

extern "C" {

typedef struct Table {
    /* 0x0 */ u8 *entries;
    /* 0x4 */ u32 count;
} Table;

typedef struct Owner {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ Table *table;
} Owner;

/* Writes the address of 0x30-byte entry `index` of the owner's table to *out, or 0. */
void FUN_00234624(int *out, Owner *owner, u32 index)
{
    Table *table;
    int entry;

    *out = 0;
    table = owner->table;
    if ((table != NULL) && (table->count >= index)) {
        entry = (int)table->entries + index * 0x30;
    } else {
        entry = 0;
    }
    *out = entry;
}

} /* extern "C" */
