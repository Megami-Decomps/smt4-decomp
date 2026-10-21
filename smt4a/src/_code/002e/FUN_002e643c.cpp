/* NON_MATCHING: retail uses 5TE-style Thumb moves, a single-read tagged traversal, and an unreferenced 0x8002 pool word. */
#include "common.h"

struct FileSlot {
    u8 unk00[0x4c];
    u32 nextAndUsed; // 0x4c: bit zero is the used flag; the other bits hold the next slot
};

extern "C" {
extern FileSlot DAT_0064be80;
void *asdOperatorNewD(u32);
void sysMemClear(void *, u32);
FileSlot *FUN_002e63a8(const char *, const char *, FileSlot *);

// Find an unused file slot, extending the tagged slot chain when necessary.
FileSlot *FUN_002e643c(const char *path, const char *mode)
{
    FileSlot *slot = &DAT_0064be80;
    while (slot->nextAndUsed & 1) {
        FileSlot *next = (FileSlot *)(slot->nextAndUsed & ~1u);
        if (next == NULL) {
            next = (FileSlot *)asdOperatorNewD(sizeof(FileSlot));
            if (next == NULL)
                return NULL;
            slot->nextAndUsed |= ((u32)next & ~1u) | 1;
            sysMemClear(next, sizeof(FileSlot));
            return FUN_002e63a8(path, mode, next);
        }
        slot = next;
    }
    return FUN_002e63a8(path, mode, slot);
}
}
