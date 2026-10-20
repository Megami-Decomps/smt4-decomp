#include "common.h"

extern "C" {

typedef struct Row {
    /* 0x00 */ u32 first;
    /* 0x04 */ u32 second;
    /* 0x08 */ u32 third;
} Row;                          /* 0xC */

typedef struct Table {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Row *rows;
    /* 0x08 */ u8 unk08[4];
    /* 0x0C */ u8 enabled;
} Table;

/* Returns the first word of row (index + 1), or 0 when the table is disabled. */
u32 FUN_001b3c90(Table *table, s32 index)
{
    u32 value;

    if (table->enabled == 0) {
        value = 0;
    } else {
        value = table->rows[index + 1].first;
    }
    return value;
}

} /* extern "C" */
