#include "common.h"

extern "C" {

typedef struct SortEntry {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ u16 order;
    /* 0x26 */ u16 level;
} SortEntry;

extern SortEntry *appCostRecordFindById(u32 id);
extern s32 appCheckPurchaseRequirements(u32 id);

/* Comparator: entries of kind 2 sort first; then by level and by order, both descending. */
s32 entryRefCompareByKindLevelOrder(u32 *a, u32 *b)
{
    SortEntry *entryA = appCostRecordFindById(*a);
    SortEntry *entryB = appCostRecordFindById(*b);
    s32 kindA = appCheckPurchaseRequirements(*a);
    s32 kindB = appCheckPurchaseRequirements(*b);
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
        entryA = appCostRecordFindById(*a);
        entryB = appCostRecordFindById(*b);
        diff = entryB->order - entryA->order;
    }
    return diff;
}

} /* extern "C" */
