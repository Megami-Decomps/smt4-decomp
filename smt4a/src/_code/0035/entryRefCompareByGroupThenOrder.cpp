#include "common.h"
#include "gamedata/EquipmentRecordA.h"

extern "C" {

typedef struct SortRef {
    /* 0x0 */ u16 id;
} SortRef;

/* Comparator: orders two references by group, then by order, both descending. */
s32 entryRefCompareByGroupThenOrder(SortRef *a, SortRef *b)
{
    EquipmentRecordA *entryA = itemTableGetEquipmentRecord(a->id);
    EquipmentRecordA *entryB = itemTableGetEquipmentRecord(b->id);
    s32 diff = entryB->traitBits.group - entryA->traitBits.group;

    if (diff == 0) {
        entryA = itemTableGetEquipmentRecord(a->id);
        entryB = itemTableGetEquipmentRecord(b->id);
        diff = entryB->order - entryA->order;
    }
    return diff;
}

} /* extern "C" */
