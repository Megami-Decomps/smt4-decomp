#include "common.h"

extern "C" {

typedef struct FileSlotRef {
    /* 0 */ u32 unk0;
    /* 4 */ s32 refCount;
} FileSlotRef;

extern FileSlotRef g_fileSlot17Ref;

extern u32 dataTableFree(u32 slot);

/* Drops one reference to file slot 0x17 and frees it with the last one. */
u32 fileSlot17Release(void)
{
    u32 result = 1;

    g_fileSlot17Ref.refCount--;
    if (g_fileSlot17Ref.refCount <= 0) {
        result = dataTableFree(0x17);
    }
    return result;
}

}
