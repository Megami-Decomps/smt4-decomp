#include "common.h"

extern "C" {

#define DATA_TABLE_SLOTS 0x50

typedef struct DataTableSlot {
    /* 0x00 */ u32 file;        /* file the table is loaded from */
    /* 0x04 */ void *data;      /* loaded table, NULL when free */
    /* 0x08 */ u32 size;
    /* 0x0c */ u8 locked;       /* non-zero keeps the table loaded */
    /* 0x0d */ u8 unk0d[3];
} DataTableSlot;

extern DataTableSlot g_dataTableSlots[DATA_TABLE_SLOTS]; /* 0x5e2214 */

s32 jyoucyuGetTableEntry(u32 index);
s32 asdLoadFileGetUseRawPaths(void);
void asdLoadFileSetUseRawPaths(s32 enable);
void *FUN_0013c174(u32 file, u32 *size, s32 flags);
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
            data = FUN_0013c174(slot->file, &size, 0);
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
