#include "common.h"
#include "gamedata/Table8Type5Lookup.h"
#include "gamedata/DataTable40.h"

extern "C" {

typedef struct ItemData {
    /* 0x00 */ u8 unk00[0x2c];
    /* 0x2C */ u16 order;
} ItemData;

/* An id and a scratch word, as the sort tie-break takes them. */
typedef struct SortKey {
    /* 0x00 */ u32 id;
    /* 0x04 */ u32 unk04;
} SortKey;

s32 idIsAbove400(u32 id);
s32 itemGetSortCategory(u32 id);
s32 FUN_00257568(SortKey *a, SortKey *b);
}

/* Orders two keys by rank, then by descending item order (ids above 400 rank 99 with order 0);
 * ties go to FUN_00257568. */
static __inline s32 sortKeyCompare(SortKey &a, SortKey &b)
{
    s32 rankA;
    s32 rankB;
    u16 orderA;
    u16 orderB;

    if (idIsAbove400(a.id)) {
        rankA = 99;
        orderA = 0;
    } else {
        rankA = itemGetSortCategory(a.id);
        orderA = reinterpret_cast<ItemData *>(dataTable40FindById(a.id))->order;
    }
    if (idIsAbove400(b.id)) {
        rankB = 99;
        orderB = 0;
    } else {
        rankB = itemGetSortCategory(b.id);
        orderB = reinterpret_cast<ItemData *>(dataTable40FindById(b.id))->order;
    }
    s32 diff = rankA - rankB;
    if (diff == 0)
        diff = orderB - orderA;
    if (diff != 0)
        return diff;
    return FUN_00257568(&a, &b);
}

extern "C" {

/* Sort compare of two type-5 table-8 entries by the items they refer to. */
s32 FUN_002e44e0(const u16 *indexA, const u16 *indexB)
{
    Table8Type5Record *unitA = table8Type5FindById(*indexA);
    Table8Type5Record *unitB = table8Type5FindById(*indexB);
    SortKey a;
    SortKey b;

    a.id = unitA->value;
    a.unk04 = 0;
    b.id = unitB->value;
    b.unk04 = 0;
    return sortKeyCompare(a, b);
}

} /* extern "C" */
