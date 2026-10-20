#include "common.h"

extern "C" {

typedef struct Table {
    /* 0x000 */ u8 unk000[0x2A0];
    /* 0x2A0 */ u32 entries[1];
} Table;

Table *gameFlagBlockGet(void);

/* Returns the address of entry `index` of the table at 0x2A0 of the gameFlagBlockGet table. */
u32 *gameFlagBlockGetEntry(s32 index)
{
    Table *table = gameFlagBlockGet();
    return &table->entries[index];
}

} /* extern "C" */
