#include "shard/GameDataBlocks.h"

struct StoredGameRecord {
    u32 unk00[5];
    u16 unk14;
    u8 flags; // 0x16
    u8 unk17;
    u32 unk18[7];
};
struct StoredGameRecords {
    u8 unk0000[0xc1f8];
    StoredGameRecord entries[1281]; // 0xc1f8
};

extern "C" {
// Replace an indexed record and mark it populated.
s32 gameDataStoreRecord(u32 index, const StoredGameRecord *record)
{
    if (index > 1280) {
        return 0;
    }
    StoredGameRecords *data = (StoredGameRecords *)g_gameDataBlocks.saveBlock;
    StoredGameRecord *destination = &data->entries[index];
    *destination = *record;
    destination->flags |= 1;
    return 1;
}
}
