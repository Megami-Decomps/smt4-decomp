/* NON_MATCHING: register allocation in the rank comparison: retail keeps `a` in r6 and the first rank in r4. */
#include "common.h"
#include "gamedata/Table04Record.h"

/* A sortable entry: a unit id and its slot (negative when it has none). */
struct UnitSortEntry {
    /* 0x00 */ s32 id;
    /* 0x04 */ s32 slot;
};

struct UnitLowRecord {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ u16 level;
};

struct UnitSlotRecord {
    /* 0x00 */ u8 unk00[0x62];
    /* 0x62 */ u16 rank;
};

extern "C" {
s32 idIsAbove400(s32 id);
UnitSlotRecord *gameGetSlotRecord(s32 slot);
s32 FUN_003811ec(const UnitSortEntry *a, const UnitSortEntry *b);

static __inline u32 unitSortLevel(const UnitSortEntry *entry)
{
    if (idIsAbove400(entry->id)) {
        return dataTable41FindById(entry->id)->stats.level;
    }
    return ((UnitLowRecord *)dataTable04FindById(entry->id))->level;
}

static __inline u32 unitSortRank(const UnitSortEntry *entry)
{
    if (entry->slot < 0) {
        return 0;
    }
    return gameGetSlotRecord(entry->slot)->rank;
}

/* Sort comparator: higher level first, then higher slot rank, then FUN_003811ec. */
s32 FUN_003758d8(const UnitSortEntry *a, const UnitSortEntry *b)
{
    u32 levelA = unitSortLevel(a);
    s32 diff = unitSortLevel(b) - levelA;
    if (diff != 0) {
        return diff;
    }
    u32 rankA = unitSortRank(a);
    diff = unitSortRank(b) - rankA;
    if (diff != 0) {
        return diff;
    }
    return FUN_003811ec(a, b);
}

} /* extern "C" */
