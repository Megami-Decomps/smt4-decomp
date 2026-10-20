/* NON_MATCHING: the final tail call (retail's `b` to the list-remove function at 0x431e1c has no symbol or unit, hence no relocation; build emits R_ARM_JUMP24 FUN_00431e1c) and register allocation (retail walks the list through a copy of the head address). */
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
void FUN_00431e1c(void *list, void *node);

extern u8 DAT_00647604;  /* list of top level heap regions */

/* Removes the block at `node` from the block list of the region that holds it (the list of the
 * top level regions when none does). */
void FUN_00431e90(void *node)
{
    void *list = &DAT_00647604;
    HeapRegion *region = NULL;

    for (;;) {
        region = nn_fnd_detail_GetNextListObject(&DAT_00647604, region);
        if (region == NULL) {
            break;
        }
        if ((u8 *)node >= region->begin && (u8 *)node < region->end) {
            HeapRegion *nested = nnFndFindNestedRange(region->list, node);

            if (nested == NULL) {
                nested = region;
            }
            list = nested->list;
            break;
        }
    }
    FUN_00431e1c(list, node);
}

} /* extern "C" */
