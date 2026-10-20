#include "common.h"

extern "C" {

typedef struct SortEntry {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ u16 order;
    /* 0x26 */ u16 level;
} SortEntry;

extern SortEntry *FUN_00186f58(u32 id);
extern s32 FUN_003e4230(u32 id);

/* Comparator: entries of kind 2 sort first; then by level and by order, both descending. */
s32 entryRefCompareByKindLevelOrder(u32 *a, u32 *b)
{
    SortEntry *entryA = FUN_00186f58(*a);
    SortEntry *entryB = FUN_00186f58(*b);
    s32 kindA = FUN_003e4230(*a);
    s32 kindB = FUN_003e4230(*b);
    s32 diff;

    if (kindA == 2) {
        if (kindB != 2) {
            return 1;
        }
    } else if (kindB == 2) {
        return -1;
    }
    diff = entryB->level - entryA->level;
    if (diff == 0) {
        entryA = FUN_00186f58(*a);
        entryB = FUN_00186f58(*b);
        diff = entryB->order - entryA->order;
    }
    return diff;
}

} /* extern "C" */
