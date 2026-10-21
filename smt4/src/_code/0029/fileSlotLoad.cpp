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
void *fileLoadSync(const char *, u32 *, u32);

// Load a valid idle file slot once, preserving an already loaded slot.
u32 fileSlotLoad(u32 id)
{
    if (id < 67) {
        FileSlot *slot = &g_fileSlots[id];
        if (slot->data != NULL)
            return 1;
        if (slot->busy == 0) {
            slot->data = fileLoadSync(slot->path, &slot->size, 0);
            return 1;
        }
    }
    return 0;
}
}
