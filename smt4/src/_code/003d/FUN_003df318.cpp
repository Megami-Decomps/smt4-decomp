#include "common.h"

extern "C" {

typedef struct Table {
    /* 0x0 */ u8 *entries;
    /* 0x4 */ u32 count;
} Table;

typedef struct Owner {
    /* 0x0 */ u32 unk0;
    /* 0x4 */ Table *table;
} Owner;

/* Writes the address of 0x30-byte entry `index` of owner's table (0 when absent). */
void FUN_003df318(int *out, Owner *owner, u32 index)
{
    Table *table = owner->table;
    int entry;

    if ((table != NULL) && (table->count >= index)) {
        entry = (int)table->entries + index * 0x30;
    } else {
        entry = 0;
    }
    *out = entry;
}

} /* extern "C" */
