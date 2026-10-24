/* NON_MATCHING: readable rebuild from asm of the add-on treasure roll (a table-22 record's item count and per-slot chances, then random picks from the matching table-83 records); armcc here keeps the candidate buffer and the table lookups in different stack slots, and the second record lookup is dereferenced unchecked, as in retail. */
#include "common.h"

/* The count/chance record of one treasure (table 22 or its table-33 fallback, 28 bytes). */
struct TreasureRecord {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 minCount;
    /* 0x05 */ u8 maxCount;
    /* 0x06 */ u8 minLevel;
    /* 0x07 */ u8 maxLevel;
    struct Slot {
        u16 item;
        u8 kind;       /* 0: a fixed roll */
        u8 chance;     /* percent */
    } slots[3];
    /* 0x14 */ u8 tags[4];
    /* 0x18 */ u16 unk18;
    /* 0x1A */ u8 unk1A[2];
};

/* A candidate item record (table 83). */
struct ItemRecord {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u16 id;
    /* 0x22 */ u8 unk22[2];
    /* 0x24 */ u8 level;
    /* 0x25 */ u8 tag;
};

struct MapDepart {
    /* 0x00 */ u8 unk00[0xB0];
    /* 0xB0 */ u32 lastRecord;
};

extern "C" {
extern MapDepart *g_mapDepart;
extern void *g_aocSystem;

TreasureRecord *aocFindTable22Record(void *system, s32 index);
ItemRecord *aocRecordLookup83(u32 id);
void *dataTableGet(s32 table, s32 section);
TreasureRecord *dataTableGetEntries(void *section);
u32 dataTableGetCount(void *section);
void flagValueAdd(s32 id, s32 count);
s32 gamePackedFlagTest(s32 id);
s32 randRange(u32 limit);
s32 __aeabi_idivmod(s32 a, s32 b);
void jyoucyuGetTableEntry(s32 index);

/* The treasure record of an index: the table-22 record or else the table-33 entry. */
static TreasureRecord *findTreasureRecord(s32 index)
{
    TreasureRecord *record = aocFindTable22Record(g_aocSystem, index);
    if (record != NULL)
        return record;
    void *section = dataTableGet(33, 0);
    TreasureRecord *entries = dataTableGetEntries(section);
    if ((u32)index < dataTableGetCount(section))
        return entries + index;
    return NULL;
}

/* Rolls the treasure of `index`: how many items (written to `count`), which of its fixed slots hit
 * by chance and then random items of the record's level range and tags for the rest; each is added
 * to the flag storage, with its id in `ids` and whether it was new in `isNew`. Returns the roll's
 * percent, or 0 when nothing could be rolled. */
s32 FUN_002b5e08(u32 unused, u32 *ids, u8 *isNew, s32 *count, s32 index)
{
    MapDepart *depart = g_mapDepart;
    TreasureRecord *record = findTreasureRecord(index);
    s32 percent;
    s32 wanted;
    s32 found = 0;
    if (record == NULL) {
        jyoucyuGetTableEntry(0);
        return 0;
    }
    s32 low = record->minCount;
    s32 high = record->maxCount;
    if (high < low) {
        s32 swap = low;
        low = high;
        high = swap;
    }
    if (low == high) {
        percent = 50;
        wanted = high;
    } else {
        s32 span = high - low;
        s32 roll = randRange((u16)span);
        percent = __aeabi_idivmod(roll * 100, span);
        wanted = low + roll;
    }
    if (wanted <= 0) {
        jyoucyuGetTableEntry(0);
        return 0;
    }
    depart->lastRecord = record->unk18;
    if (count != NULL)
        *count = wanted;
    for (s32 slot = 0; slot < 3; slot++) {
        TreasureRecord::Slot *entry = &record->slots[slot];
        if (entry->item != 0 && entry->chance != 0 && entry->kind == 0) {
            if ((u16)(randRange(99) + 1) <= entry->chance) {
                flagValueAdd(entry->item, 1);
                if (ids != NULL)
                    ids[found] = entry->item;
                found++;
                if (found >= wanted)
                    return percent;
            }
        }
    }
    TreasureRecord *second = findTreasureRecord(index);
    u32 tags[4] = { second->tags[0], second->tags[1], second->tags[2], second->tags[3] };
    u32 minLevel = second->minLevel;
    u32 maxLevel = second->maxLevel;
    if (minLevel > maxLevel) {
        u32 swap = minLevel;
        minLevel = maxLevel;
        maxLevel = swap;
    }
    u16 candidates[200];
    s32 candidateCount = 0;
    for (u32 id = 0x3B7; id <= 0x47E; id++) {
        ItemRecord *item = aocRecordLookup83(id);
        if (item != NULL && minLevel <= item->level && item->level <= maxLevel &&
            (item->tag == tags[0] || item->tag == tags[1] || item->tag == tags[2] || item->tag == tags[3]))
            candidates[candidateCount++] = item->id;
    }
    if ((s16)candidateCount == 0) {
        jyoucyuGetTableEntry(0);
        return 0;
    }
    while (found < wanted) {
        s32 pick = (s16)candidates[randRange((u16)((s16)candidateCount - 1))];
        isNew[found] = gamePackedFlagTest(pick) == 0;
        flagValueAdd(pick, 1);
        if (ids != NULL)
            ids[found] = pick;
        found++;
    }
    return percent;
}

} /* extern "C" */
