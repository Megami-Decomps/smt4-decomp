#include "common.h"

/* One preloadable file: its id, the loaded data, its size and whether it should be loaded. */
struct FileSlot {
    /* 0x00 */ u32 fileId;
    /* 0x04 */ void *data;
    /* 0x08 */ u32 size;
    /* 0x0C */ u8 enabled;
    /* 0x0D */ u8 unk0d[3];
};

extern "C" {

extern FileSlot g_fileSlots[67];

s32 randBetween(s32 low, s32 high);
void *fileLoadSync(u32 fileId, u32 *size, s32 flags);

/* Load every enabled, not yet loaded file slot, in a partly shuffled order. */
u32 fileSlotsPreloadShuffled(void)
{
    u8 order[67];
    for (s32 i = 0; i < 67; ++i) {
        order[i] = i;
    }
    for (s32 i = 0; i < 33; ++i) {
        s32 j = randBetween(i + 1, 66);
        u8 swap = order[i];
        order[i] = order[j];
        order[j] = swap;
    }
    for (s32 i = 0; i < 67; ++i) {
        FileSlot *slot = &g_fileSlots[order[i]];
        if (slot->data == NULL && slot->enabled) {
            slot->data = fileLoadSync(slot->fileId, &slot->size, 0);
        }
    }
    return 1;
}

} /* extern "C" */
