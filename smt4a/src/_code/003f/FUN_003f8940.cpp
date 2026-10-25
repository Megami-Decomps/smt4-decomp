#include "AsdSDK/AsdLoadFileSyncDefault.h"
#include "gamedata/DataTableSlots.h"

extern "C" {

/* Loads the data of each of the eleven listed data table slots that has none yet. */
u32 FUN_003f8940(void)
{
    s32 ids[11] = {0, 2, 4, 0xB, 0x18, 8, 9, 10, 0x2B, 0x40, 0x41};

    for (s32 i = 0; i < 11; i++) {
        DataTableSlot *slot = &g_dataTableSlots[ids[i]];

        if (slot->data == NULL) {
            slot->data = asdLoadFileWithSize(slot->path, &slot->size, 0);
        }
    }
    return 1;
}

} /* extern "C" */
