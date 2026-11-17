#include "common.h"
#include "gamedata/EquipmentRecordA.h"

extern "C" {

typedef struct SortRef {
    /* 0x0 */ u16 id;
} SortRef;

/* Comparator: orders two references by group, then by order, both descending. */
s32 entryRefCompareByGroupThenOrder(SortRef *a, SortRef *b)
{
    EquipmentRecordA *entryA = dataTable08Sub2GetRecord(a->id);
    EquipmentRecordA *entryB = dataTable08Sub2GetRecord(b->id);
    s32 diff = entryB->traitBits.group - entryA->traitBits.group;

    if (diff == 0) {
        entryA = dataTable08Sub2GetRecord(a->id);
        entryB = dataTable08Sub2GetRecord(b->id);
        diff = entryB->order - entryA->order;
    }
    return diff;
}

} /* extern "C" */
