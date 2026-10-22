#include "common.h"

struct FileSlot {
    const char *path; // 0x00
    void *data; // 0x04
    u32 size; // 0x08
    u8 busy; // 0x0c
    u8 unk0d[3];
};

extern "C" {
extern FileSlot g_fileSlots[67];
s32 jyoucyuGetTableEntry(u32 index);
s32 asdLoadFileGetUseRawPaths(void);
void asdLoadFileSetUseRawPaths(s32 enable);
void *fileLoadSync(const char *path, u32 *size, u32 option);
void *rt_memcpy(void *destination, const void *source, u32 size);
void asdMemFree(void *memory);

/* Reloads a loaded file slot from its raw path: in place when the size is unchanged, otherwise
 * replacing the slot's buffer. */
void fileSlotReloadRaw(u32 id)
{
    if (jyoucyuGetTableEntry(2) == 0 && id < 67) {
        FileSlot *slot = &g_fileSlots[id];
        if (slot->data != NULL) {
            bool usedRawPaths = false;
            u32 size;
            void *data;

            if (asdLoadFileGetUseRawPaths()) {
                usedRawPaths = true;
            }
            asdLoadFileSetUseRawPaths(1);
            data = fileLoadSync(slot->path, &size, 0);
            if (slot->size == size) {
                rt_memcpy(slot->data, data, size);
                asdMemFree(data);
            } else {
                asdMemFree(slot->data);
                slot->data = data;
                slot->size = size;
            }
            if (!usedRawPaths) {
                asdLoadFileSetUseRawPaths(0);
            }
        }
    }
}

} /* extern "C" */
