#include "AsdSDK/AsdLoadFileSyncDefault.h"
#include "gamedata/DataTableSlots.h"
#include "AsdSDK/Source/Sys/File/AsdFileHelpers_Smt4a.h"

extern "C" {

// Make sure the slot's resource is loaded; false for an invalid or failed slot.
u32 loadSlotEnsureLoaded(u32 index)
{
    if (index >= DATA_TABLE_SLOTS) {
        return 0;
    }
    DataTableSlot *slot = &g_dataTableSlots[index];
    if (slot->data == NULL) {
        if (slot->locked != 0) {
            return 0;
        }
        if (index == 7) {
            slot->data = asdLoadFileWithSize(slot->path, &slot->size, 1);
        } else {
            slot->data = asdLoadFileWithSize(slot->path, &slot->size, 0);
        }
    }
    return 1;
}

} /* extern "C" */
