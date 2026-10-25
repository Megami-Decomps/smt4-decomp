#include "shard/W4_W4Match6b_GameDataBlock.h"

struct SavedRecord {
    /* 0x00 */ u8 unk00[0x16];
    /* 0x16 */ u8 flags;
    /* 0x17 */ u8 unk17[0x39];
};
struct SavedRecordBlock {
    /* 0x0000 */ u8 unk0000[0x5f0c];
    /* 0x5F0C */ SavedRecord records[0x501];
};
extern "C" void __aeabi_memcpy4(void *destination, const void *source, u32 bytes);

/* Replace a saved record and mark its slot as present. */
extern "C" s32 gameDataStoreSavedRecord(u32 index, const SavedRecord *source)
{
    if (index > 0x500) {
        return 0;
    }
    SavedRecordBlock *block = reinterpret_cast<SavedRecordBlock *>(g_gameDataBlocks.saveBlock);
    SavedRecord *destination = &block->records[index];
    __aeabi_memcpy4(destination, source, sizeof(*destination));
    destination->flags |= 1;
    return 1;
}
