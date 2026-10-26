#include "common.h"
#include "gamedata/ItemSortRecord.h"
#include "gamedata/DataTable40.h"

extern "C" {

typedef struct SlotRecord {
    /* 0x00 */ u8 unk00[0x46];
    /* 0x46 */ u16 sortKey;
} SlotRecord;

typedef struct SortItem {
    /* 0x00 */ int id;
    /* 0x04 */ int slot;       /* negative when the item is not in a slot */
} SortItem;

extern int idIsAbove400(int id);
extern int FUN_0024c5a0(int id);
extern int recordKindRank(int id);
extern SlotRecord *gameGetUnitRecord(int slot);

/* Compare function for sorting items: by two ranks, the data row's order, the id, then the slot's sort key. */
int FUN_00257568(SortItem *a, SortItem *b)
{
    int rankB;
    int rankA;
    int subB;
    int subA;
    u32 orderB;
    u32 orderA;
    u32 slotKeyA;
    u32 slotKeyB;
    int diff;

    if (idIsAbove400(a->id) != 0) {
        rankA = 99;
        subA = 99;
        orderA = 0;
    } else {
        rankA = FUN_0024c5a0(a->id);
        subA = recordKindRank(a->id);
        orderA = reinterpret_cast<const ItemSortRecord *>(dataTable40FindById(a->id))->secondaryKey;
    }
    if (idIsAbove400(b->id) != 0) {
        rankB = 99;
        subB = 99;
        orderB = 0;
    } else {
        rankB = FUN_0024c5a0(b->id);
        subB = recordKindRank(b->id);
        orderB = reinterpret_cast<const ItemSortRecord *>(dataTable40FindById(b->id))->secondaryKey;
    }
    diff = rankA - rankB;
    if (diff == 0) {
        diff = subA - subB;
        if (diff == 0) {
            diff = orderB - orderA;
            if (diff == 0) {
                diff = a->id - b->id;
                if (diff == 0) {
                    slotKeyA = (a->slot < 0) ? 0 : gameGetUnitRecord(a->slot)->sortKey;
                    slotKeyB = (b->slot < 0) ? 0 : gameGetUnitRecord(b->slot)->sortKey;
                    diff = slotKeyA - slotKeyB;
                }
            }
        }
    }
    return diff;
}

} /* extern "C" */
