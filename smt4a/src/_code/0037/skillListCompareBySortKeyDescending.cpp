#include "common.h"
#include "gamedata/SkillDataRecord.h"
#include "gamedata/SaveSlotRecord.h"

/* A sortable entry: a unit id and its slot (negative when it has none). */
struct UnitSortEntry {
    /* 0x00 */ s32 id;
    /* 0x04 */ s32 slot;
};

struct UnitLowRecord {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ u16 level;
};

extern "C" {
s32 idIsAbove400(s32 id);
s32 itemSortCompareByCategoryAndId(const UnitSortEntry *a, const UnitSortEntry *b);

static __inline u32 unitSortLevel(const UnitSortEntry *entry)
{
    if (idIsAbove400(entry->id)) {
        return dataTable41FindById(entry->id)->stats.level;
    }
    return ((UnitLowRecord *)skillDataFindById(entry->id))->level;
}

/* Tie-break by the slots' ranks, higher first (0 without a slot), then itemSortCompareByCategoryAndId. */
static __inline s32 compareSlotRanks(const UnitSortEntry *a, const UnitSortEntry *b)
{
    u16 rankA;
    u16 rankB;
    s32 diff;

    if (a->slot < 0) {
        rankA = 0;
    } else {
        rankA = gameGetSlotRecord(a->slot)->id;
    }
    if (b->slot < 0) {
        rankB = 0;
    } else {
        rankB = gameGetSlotRecord(b->slot)->id;
    }
    diff = rankB - rankA;
    if (diff != 0) {
        return diff;
    }
    return itemSortCompareByCategoryAndId(a, b);
}

/* Sort comparator: higher level first, then higher slot rank, then itemSortCompareByCategoryAndId. */
s32 skillListCompareBySortKeyDescending(const UnitSortEntry *a, const UnitSortEntry *b)
{
    u32 levelA = unitSortLevel(a);
    s32 diff = unitSortLevel(b) - levelA;
    if (diff != 0) {
        return diff;
    }
    return compareSlotRanks(a, b);
}

} /* extern "C" */
