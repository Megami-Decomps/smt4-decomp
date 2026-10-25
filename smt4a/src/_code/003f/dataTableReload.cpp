#include "AsdSDK/AsdLoadFileSyncDefault.h"
#include "gamedata/DataTableSlots.h"

extern "C" {

s32 jyoucyuGetTableEntry(u32 index);
s32 asdLoadFileGetUseRawPaths(void);
void asdLoadFileSetUseRawPaths(s32 enable);
void rt_memcpy(void *dst, const void *src, u32 size);
void asdMemFree(void *block);

/* Reload a loaded data table from its file: copy over the old data when the size is unchanged, otherwise replace it. */
void dataTableReload(u32 index)
{
    if (jyoucyuGetTableEntry(2) == 0 && index < DATA_TABLE_SLOTS) {
        DataTableSlot *slot = &g_dataTableSlots[index];
        if (slot->data != NULL) {
            bool rawPaths = false;
            u32 size;
            void *data;

            if (asdLoadFileGetUseRawPaths()) {
                rawPaths = true;
            }
            asdLoadFileSetUseRawPaths(1);
            data = asdLoadFileWithSize(slot->path, &size, 0);
            if (slot->size == size) {
                rt_memcpy(slot->data, data, size);
                asdMemFree(data);
            } else {
                asdMemFree(slot->data);
                slot->data = data;
                slot->size = size;
            }
            if (!rawPaths) {
                asdLoadFileSetUseRawPaths(0);
            }
        }
    }
}

} /* extern "C" */
