/* NON_MATCHING: the inlined key fill keeps the 99/0 constants in fp/r7 and saves r11/r12; retail sets each key register in its branch. */
#include "common.h"

extern "C" {

typedef struct UnitSortEntry {
    /* 0x00 */ s32 id;
    /* 0x04 */ s32 unit; // negative when the entry has no unit
} UnitSortEntry;

typedef struct UnitSortRecord {
    /* 0x00 */ u8 unk00[0x2C];
    /* 0x2C */ u16 order;
} UnitSortRecord;

typedef struct UnitRecord {
    /* 0x00 */ u8 unk00[0x46];
    /* 0x46 */ u16 level;
} UnitRecord;

s32 idIsAbove400(s32 id);
s32 FUN_0024c5a0(s32 id);
s32 recordKindRank(s32 id);
UnitSortRecord *dataTable40FindById(s32 id);
UnitRecord *gameGetUnitRecord(s32 unit);

static __inline s32 unitSortLevel(const UnitSortEntry *entry)
{
    if (entry->unit < 0) {
        return 0;
    }
    return gameGetUnitRecord(entry->unit)->level;
}

typedef struct UnitSortKey {
    s32 kind;
    s32 rank;
    s32 order;
} UnitSortKey;

static __inline void unitSortGetKey(const UnitSortEntry *entry, UnitSortKey *key)
{
    if (idIsAbove400(entry->id)) {
        key->kind = 99;
        key->rank = 99;
        key->order = 0;
    } else {
        key->kind = FUN_0024c5a0(entry->id);
        key->rank = recordKindRank(entry->id);
        key->order = dataTable40FindById(entry->id)->order;
    }
}

/* Sort comparator: by kind and rank (ids above 400 last), then descending order, then id, then unit level. */
s32 FUN_00257568(const UnitSortEntry *a, const UnitSortEntry *b)
{
    UnitSortKey keyA;
    UnitSortKey keyB;
    s32 diff;

    unitSortGetKey(a, &keyA);
    unitSortGetKey(b, &keyB);
    if ((diff = keyA.kind - keyB.kind) != 0) {
        return diff;
    }
    if ((diff = keyA.rank - keyB.rank) != 0) {
        return diff;
    }
    if ((diff = keyB.order - keyA.order) != 0) {
        return diff;
    }
    if ((diff = a->id - b->id) != 0) {
        return diff;
    }
    return unitSortLevel(a) - unitSortLevel(b);
}

} /* extern "C" */
