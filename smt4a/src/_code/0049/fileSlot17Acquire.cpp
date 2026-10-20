#include "common.h"

extern "C" {

typedef struct FileSlotRef {
    /* 0 */ u32 unk0;
    /* 4 */ s32 refCount;
} FileSlotRef;

extern FileSlotRef g_fileSlot17Ref;

extern u32 loadSlotEnsureLoaded(u32 slot);

/* Takes a reference to file slot 0x17, loading it for the first one; returns the load result (1 when already loaded). */
u32 fileSlot17Acquire(void)
{
    u32 result = 1;

    if (g_fileSlot17Ref.refCount <= 0) {
        result = loadSlotEnsureLoaded(0x17);
    }
    g_fileSlot17Ref.refCount++;
    return result;
}

}
