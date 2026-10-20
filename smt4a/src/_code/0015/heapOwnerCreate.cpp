#include "common.h"

extern "C" {

typedef struct HeapOwner {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u8 heap[0x3C];
    /* 0x54 */ u32 unk54;
} HeapOwner;

void sysFatalBreak(void);
int nn_fnd_detail_CreateHeap(void *heap, u32 start, u32 size, u16 option);

/* Creates the owner's heap in the given region, aborting when it fails, and clears unk54. */
void FUN_002c3918(HeapOwner *owner, u32 start, u32 size, u32 option)
{
    if (nn_fnd_detail_CreateHeap(owner->heap, start, size, option) == 0) {
        sysFatalBreak();
    }
    owner->unk54 = 0;
}

} /* extern "C" */
