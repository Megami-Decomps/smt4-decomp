/* NON_MATCHING: only the callee-saved register assignment of the per-entry sort values differs (retail: a in r8/sl/r6, b in r7/r9/r1). */
#include "shard/W5_W5Match5_GameSaveViews.h"

extern "C" {

/* A demon list entry: its demon id and its party slot (negative when it has none). */
typedef struct DevilListEntry {
    /* 0x00 */ s32 id;
    /* 0x04 */ s32 slot;
} DevilListEntry;

typedef struct Table04Record {
    /* 0x00 */ u8 unk00[0x2C];
    /* 0x2C */ u16 sortKey;
} Table04Record;

s32 idIsAbove400(s32 id);
s32 FUN_003a679c(s32 id);
s32 dataTable04GetCategoryOrder(s32 id);
Table04Record *dataTable04FindById(s32 id);

/* Sort comparator for demon list entries: by FUN_003a679c, then dataTable04GetCategoryOrder, then descending table 0x04 key,
 * then id, then the party slot's entry id (ids above 400 sort last). */
s32 FUN_00321a98(DevilListEntry *a, DevilListEntry *b)
{
    s32 aFirst;
    s32 aSecond;
    u32 aKey;
    s32 bFirst;
    s32 bSecond;
    u32 bKey;
    s32 diff;

    if (idIsAbove400(a->id)) {
        aFirst = 99;
        aSecond = 99;
        aKey = 0;
    } else {
        aFirst = FUN_003a679c(a->id);
        aSecond = dataTable04GetCategoryOrder(a->id);
        aKey = dataTable04FindById(a->id)->sortKey;
    }
    if (idIsAbove400(b->id)) {
        bFirst = 99;
        bSecond = 99;
        bKey = 0;
    } else {
        bFirst = FUN_003a679c(b->id);
        bSecond = dataTable04GetCategoryOrder(b->id);
        bKey = dataTable04FindById(b->id)->sortKey;
    }
    diff = aFirst - bFirst;
    if (diff != 0) {
        return diff;
    }
    diff = aSecond - bSecond;
    if (diff != 0) {
        return diff;
    }
    diff = bKey - aKey;
    if (diff != 0) {
        return diff;
    }
    diff = a->id - b->id;
    if (diff != 0) {
        return diff;
    }
    u32 aEntry = a->slot < 0 ? 0 : gameGetSlotRecord(a->slot)->entryId;
    u32 bEntry = b->slot < 0 ? 0 : gameGetSlotRecord(b->slot)->entryId;
    return aEntry - bEntry;
}

} /* extern "C" */
