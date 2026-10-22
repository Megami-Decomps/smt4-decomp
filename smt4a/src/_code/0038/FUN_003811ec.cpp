#include "common.h"

extern "C" {

typedef struct DataRow {
    /* 0x00 */ u8 unk00[0x2C];
    /* 0x2C */ u16 order;
} DataRow;

typedef struct SlotRecord {
    /* 0x00 */ u8 unk00[0x62];
    /* 0x62 */ u16 sortKey;
} SlotRecord;

typedef struct SortItem {
    /* 0x00 */ int id;
    /* 0x04 */ int slot;       /* negative when the item is not in a slot */
} SortItem;

extern int idIsAbove400(int id);
extern int itemGetCategorySortOrder(int id);
extern int dataTable04GetCategoryOrder(int id);
extern DataRow *dataTable04FindById(int id);
extern SlotRecord *gameGetSlotRecord(int slot);

/* Compare function for sorting items: by two ranks, the data row's order, the id, then the slot's sort key. */
int FUN_003811ec(SortItem *a, SortItem *b)
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
        rankA = itemGetCategorySortOrder(a->id);
        subA = dataTable04GetCategoryOrder(a->id);
        orderA = dataTable04FindById(a->id)->order;
    }
    if (idIsAbove400(b->id) != 0) {
        rankB = 99;
        subB = 99;
        orderB = 0;
    } else {
        rankB = itemGetCategorySortOrder(b->id);
        subB = dataTable04GetCategoryOrder(b->id);
        orderB = dataTable04FindById(b->id)->order;
    }
    diff = rankB - rankA;
    if (diff == 0) {
        diff = subB - subA;
        if (diff == 0) {
            diff = orderA - orderB;
            if (diff == 0) {
                diff = b->id - a->id;
                if (diff == 0) {
                    slotKeyA = (a->slot < 0) ? 0 : gameGetSlotRecord(a->slot)->sortKey;
                    slotKeyB = (b->slot < 0) ? 0 : gameGetSlotRecord(b->slot)->sortKey;
                    diff = slotKeyB - slotKeyA;
                }
            }
        }
    }
    return diff;
}

} /* extern "C" */
