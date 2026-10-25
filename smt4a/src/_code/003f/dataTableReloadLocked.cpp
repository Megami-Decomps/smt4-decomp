#include "AsdSDK/AsdLoadFileSyncDefault.h"
#include "gamedata/DataTableSlots.h"

extern "C" {

#define DATA_TABLE_SPECIAL_SLOT 63

/* Reloads every locked data table slot whose table is not loaded; slot 63 loads in mode 1. */
s32 dataTableReloadLocked(void)
{
    u8 order[DATA_TABLE_SLOTS];


    for (s32 i = 0; i < DATA_TABLE_SLOTS; i++) {
        order[i] = i;
    }
    for (s32 i = 0; i < DATA_TABLE_SLOTS; i++) {
        u8 index = order[i];
        DataTableSlot *slot = &g_dataTableSlots[index];
        if (slot->data == NULL && slot->locked != 0) {
            if (index == DATA_TABLE_SPECIAL_SLOT) {
                slot->data = asdLoadFileWithSize(slot->path, &slot->size, 1);
            } else {
                slot->data = asdLoadFileWithSize(slot->path, &slot->size, 0);
            }
        }
    }
    return 1;
}

} /* extern "C" */
