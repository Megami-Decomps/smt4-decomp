/* NON_MATCHING: loop structure, address forms and callee-saved registers now match retail; remaining: the free-slot search result and the final copy destination use different registers/predication (retail predicates `moveq r6,#31` / `moveq r0,r7` and keeps the +0x88, +0x27000 and +0x184 adds of the final record address separate where the build fuses 0x88 and 0x184). */
#include "shard/W4_W4Match6b_GameDataBlock.h"

extern "C" void FUN_002e59f8(const void *source, void *destination, u32 bytes);

/* The saved records as seen from the save data part of the game block (+0x88). */
struct SubRecordTable {
    u8 unk00000[0x27184];
    SavedRecord100 records[32];
};

static __inline SubRecordTable *getSubRecordTable()
{
    return reinterpret_cast<SubRecordTable *>(&g_gameDataBlocks.saveBlock->save.sub);
}

static __inline SavedRecord100 *getSavedRecord(u32 index)
{
    SavedRecord100 *record = NULL;
    if (index < 32) {
        GameDataSub *sub = &g_gameDataBlocks.saveBlock->save.sub;
        record = &reinterpret_cast<SubRecordTable *>(sub)->records[index];
    }
    return record;
}

// A local halfword view leaves SavedRecord100's byte-aligned representation unchanged.
struct OccupancyView {
    u8 prefix[0x34];
    u16 first;
    u8 unk36[0x2A];
    u16 second;
};

/* Index of the first unused record, or -1 when all 32 are in use. */
static __inline s32 findFreeRecord()
{
    SubRecordTable *table = getSubRecordTable();
    for (s32 i = 0; i < 32; ++i) {
        const OccupancyView *entry = reinterpret_cast<const OccupancyView *>(&table->records[i]);
        if (!entry->first && !entry->second) {
            return i;
        }
    }
    return -1;
}

extern "C" void FUN_00333474(const SavedRecord100 *record)
{
    s32 freeSlot = findFreeRecord();
    if (freeSlot == -1) {
        freeSlot = 31;
    }
    if (freeSlot != 0) {
        s32 index = freeSlot - 1;
        for (s32 moved = 0; index >= 0; --index, ++moved) {
            SavedRecord100 *source = getSavedRecord(index);
            SavedRecord100 *destination = getSavedRecord(freeSlot - moved);
            FUN_002e59f8(source, destination, sizeof(SavedRecord100));
        }
    }
    FUN_002e59f8(record, getSavedRecord(0), sizeof(SavedRecord100));
}
