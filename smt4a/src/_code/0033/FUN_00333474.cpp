/* NON_MATCHING: bounded accessor/flat-table address forms differ and retail's unreachable minus-one slot check is omitted; 53 built versus 64 retail rows. */
#include "shard/W4_W4Match6b_GameDataBlock.h"

extern "C" void FUN_002e59f8(const void *source, void *destination, u32 bytes);

static __inline SavedRecord100 *getSavedRecord(u32 index)
{
    if (index >= 32) {
        return NULL;
    }
    SavedRecordTable *table = reinterpret_cast<SavedRecordTable *>(g_gameDataBlocks.saveBlock);
    return &table->records[index];
}

extern "C" void FUN_00333474(const SavedRecord100 *record)
{
    // A local halfword view leaves SavedRecord100's byte-aligned representation unchanged.
    struct OccupancyView {
        u8 prefix[0x34];
        u16 first;
        u8 unk36[0x2A];
        u16 second;
    };
    SavedRecordTable *table = reinterpret_cast<SavedRecordTable *>(g_gameDataBlocks.saveBlock);
    s32 freeSlot = 0;
    for (; freeSlot < 32; ++freeSlot) {
        const OccupancyView *entry = reinterpret_cast<const OccupancyView *>(&table->records[freeSlot]);
        if (!entry->first && !entry->second) {
            break;
        }
    }
    if (freeSlot == 32) {
        freeSlot = 31;
    }
    for (s32 index = freeSlot - 1; index >= 0; --index) {
        SavedRecord100 *source = getSavedRecord(index);
        SavedRecord100 *destination = getSavedRecord(index + 1);
        if (destination) {
            FUN_002e59f8(source, destination, sizeof(SavedRecord100));
        }
    }
    FUN_002e59f8(record, getSavedRecord(0), sizeof(SavedRecord100));
}
