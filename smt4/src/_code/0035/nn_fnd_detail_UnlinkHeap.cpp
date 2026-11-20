#include "common.h"

extern "C" {

/* A heap region: its address range and the list of blocks (and nested regions) inside it. */
typedef struct HeapRegion {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ u8 list[0x0C];
    /* 0x18 */ u8 *begin;
    /* 0x1C */ u8 *end;
} HeapRegion;

HeapRegion *nn_fnd_detail_GetNextListObject(void *head, HeapRegion *previous);
HeapRegion *nnFndFindNestedRange(void *list, void *address);
void nnFndExpHeapUnlinkFreeBlock(void *list, void *node);

extern u8 DAT_004eac44;  /* list of top level heap regions */

/* The innermost region of `list` whose range holds `address` (the body of nnFndFindNestedRange,
 * which armcc inlined here one level deep). */
static HeapRegion *findContainingRegion(void *list, void *address)
{
    HeapRegion *region = NULL;

    while ((region = nn_fnd_detail_GetNextListObject(list, region)) != NULL) {
        if ((u8 *)address >= region->begin && (u8 *)address < region->end) {
            HeapRegion *nested = nnFndFindNestedRange(region->list, address);

            if (nested == NULL) {
                nested = region;
            }
            return nested;
        }
    }
    return NULL;
}

/* Removes the block at `node` from the block list of the region that holds it (the list of the
 * top level regions when none does). */
void nn_fnd_detail_UnlinkHeap(void *node)
{
    void *list = &DAT_004eac44;
    HeapRegion *region = findContainingRegion(&DAT_004eac44, node);
    if (region != NULL) {
        list = region->list;
    }
    nnFndExpHeapUnlinkFreeBlock(list, node);
}

} /* extern "C" */
