#include "common.h"

extern "C" {

typedef struct Table {
    /* 0x000 */ u8 unk000[0x2A0];
    /* 0x2A0 */ u32 entries[1];
} Table;

Table *FUN_001ab940(void);

/* Returns the address of entry `index` of the table at 0x2A0 of the FUN_001ab940 table. */
u32 *FUN_001abac8(s32 index)
{
    Table *table = FUN_001ab940();
    return &table->entries[index];
}

} /* extern "C" */
