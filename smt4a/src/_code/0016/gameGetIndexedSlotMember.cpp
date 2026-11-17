#include "gamedata/MapSaveBlockA.h"

extern "C" {

typedef struct Entry {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 member08[1];
} Entry;

Entry *dataTableGetEntry49(u8 id);

/* Returns the address of the member at 8 of the entry for slot `index` (0..7) of the table, or NULL when the table or the entry is missing. */
u8 *gameGetIndexedSlotMember(s32 index)
{
    MapSaveBlockA *table;
    u8 *id;
    Entry *entry;

    table = gameFlagsGetBlock();
    if (table != NULL) {
        table = gameFlagsGetBlock();
        if (table != NULL && index < 8) {
            id = &table->naviSlots[index].id;
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
