#include "common.h"

extern "C" {

typedef struct Table {
    /* 0x0000 */ u8 unk0000[0x1590];
    /* 0x1590 */ u32 ids[8];
} Table;

typedef struct Entry {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 member08[1];
} Entry;

Table *gameFlagsGetBlock(void);
Entry *dataTableGetEntry49(u8 id);

/* Returns the address of the member at 8 of the entry for slot `index` (0..7) of the table, or NULL when the table or the entry is missing. */
u8 *FUN_00169240(s32 index)
{
    Table *table;
    u8 *id;
    Entry *entry;

    table = gameFlagsGetBlock();
    if (table != NULL) {
        table = gameFlagsGetBlock();
        if (table != NULL && index < 8) {
            id = (u8 *)&table->ids[index];
        } else {
            id = NULL;
        }
        entry = dataTableGetEntry49(*id);
        if (entry != NULL) {
            return entry->member08;
        }
    }
    return NULL;
}

} /* extern "C" */
