#include "common.h"
#include "mobiclip_ctrl/MobiclipHeaps.h"

extern "C" {

extern MobiclipHeap DAT_004c38d8[];
extern void FUN_002b3194(MobiclipHeap *pool, void *record);

static __inline MobiclipHeap *mobiclipHeapOwnerAt(u32 index)
{
    return &DAT_004c38d8[index];
}

/* Returns an allocated record to its pool. */
void FUN_0018c034(void *record)
{
    if (record != NULL) {
        FUN_002b3194(mobiclipHeapOwnerAt(0), record);
    }
}

} /* extern "C" */
