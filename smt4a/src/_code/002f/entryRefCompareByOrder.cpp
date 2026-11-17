#include "common.h"
#include "gamedata/ConsumableRecordA.h"

extern "C" {

typedef struct SortRef {
    /* 0x0 */ u16 id;
} SortRef;

/* Comparator: orders two references by their entry's sort key. */
s32 entryRefCompareByOrder(SortRef *a, SortRef *b)
{
    ConsumableRecordA *entryA = itemTableGetItemRecord(a->id);
    ConsumableRecordA *entryB = itemTableGetItemRecord(b->id);

    return entryA->rank - entryB->rank;
}

} /* extern "C" */
