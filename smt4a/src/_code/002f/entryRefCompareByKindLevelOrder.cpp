#include "common.h"

extern "C" {

typedef struct SortEntry {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ u16 order;
    /* 0x26 */ u16 level;
} SortEntry;

extern SortEntry *dataFindKeyedRecordWithOverrides(u32 id);
extern s32 shopGetEntryAvailability(u32 id);

/* Comparator: entries of kind 2 sort first; then by level and by order, both descending. */
s32 entryRefCompareByKindLevelOrder(u32 *a, u32 *b)
{
    SortEntry *entryA = dataFindKeyedRecordWithOverrides(*a);
    SortEntry *entryB = dataFindKeyedRecordWithOverrides(*b);
    s32 kindA = shopGetEntryAvailability(*a);
    s32 kindB = shopGetEntryAvailability(*b);
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
        entryA = dataFindKeyedRecordWithOverrides(*a);
        entryB = dataFindKeyedRecordWithOverrides(*b);
        diff = entryB->order - entryA->order;
    }
    return diff;
}

} /* extern "C" */
