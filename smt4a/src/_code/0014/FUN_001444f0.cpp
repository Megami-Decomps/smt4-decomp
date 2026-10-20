#include "common.h"

extern "C" {

typedef struct Table {
    /* 0x00 */ u32 entries[32];
    /* 0x80 */ u32 extraA;
    /* 0x84 */ u32 extraB;
} Table;

typedef struct Owner {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Table *table;
} Owner;

void FUN_001524cc(u32 handle);

/* Releases every non-zero handle of the owner's table, then the two extra handles; always returns 0. */
u32 FUN_001444f0(Owner *owner)
{
    s32 i;
    Table *table;

    i = 0;
    table = owner->table;
    do {
        if (table->entries[i] != 0) {
            FUN_001524cc(table->entries[i]);
        }
        i = i + 1;
    } while (i < 0x20);
    FUN_001524cc(table->extraA);
    FUN_001524cc(table->extraB);
    return 0;
}

} /* extern "C" */
