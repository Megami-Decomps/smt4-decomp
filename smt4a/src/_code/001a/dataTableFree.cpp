#include "gamedata/DataTableSections.h"
#include "gamedata/DataTableSlots.h"

extern "C" {

void asdMemFree(void *block);

/* Frees data table slot `index`; fails (0) for a bad index or a locked table. */
u32 dataTableFree(u32 index)
{
    DataTableSlot *slot;

    if (index < DATA_TABLE_SLOTS) {
        slot = &g_dataTableSlots[index];
        if (slot->data == NULL) {
            return 1;
        }
        if (slot->locked == 0) {
            asdMemFree(slot->data);
            slot->data = NULL;
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
