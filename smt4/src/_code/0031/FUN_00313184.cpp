#include "common.h"
#include "gamedata/Table8Type5Lookup.h"
#include "gamedata/ItemSortRecord.h"
#include "gamedata/DataTable40.h"

/* An item as the item sort compares it: its id and its slot (0 when not in a slot). */
struct ItemSortKey {
    u32 id;
    s32 slot;
};

extern "C" {
s32 idIsAbove400(u32 id);
s32 itemGetSortCategory(u32 id);
s32 itemSortCompareByCategoryAndId(const ItemSortKey *left, const ItemSortKey *right);
}

/* Compare by descending category rank, ascending record key, then the existing tie break. */
static __inline s32 itemSortCompareCategory(const ItemSortKey *left, const ItemSortKey *right)
{
    s32 leftRank;
    u16 leftKey;
    if (idIsAbove400(left->id)) {
        leftRank = 99;
        leftKey = 0;
    } else {
        leftRank = itemGetSortCategory(left->id);
        leftKey = reinterpret_cast<ItemSortRecord *>(dataTable40FindById(left->id))->secondaryKey;
    }
    s32 rightRank;
    u16 rightKey;
    if (idIsAbove400(right->id)) {
        rightRank = 99;
        rightKey = 0;
    } else {
        rightRank = itemGetSortCategory(right->id);
        rightKey = reinterpret_cast<ItemSortRecord *>(dataTable40FindById(right->id))->secondaryKey;
    }
    s32 difference = rightRank - leftRank;
    if (difference == 0)
        difference = leftKey - rightKey;
    if (difference != 0)
        return difference;
    return itemSortCompareByCategoryAndId(left, right);
}

extern "C" {

/* Sort compare of two type-5 table-8 entries by the items they refer to. */
s32 FUN_00313184(const u16 *first, const u16 *second)
{
    Table8Type5Record *firstRecord = table8Type5FindById(*first);
    Table8Type5Record *secondRecord = table8Type5FindById(*second);
    ItemSortKey left;
    ItemSortKey right;
    left.id = firstRecord->value;
    left.slot = 0;
    right.id = secondRecord->value;
    right.slot = 0;
    return itemSortCompareCategory(&left, &right);
}
}
