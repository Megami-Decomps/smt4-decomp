/* NON_MATCHING: save-block load scheduling and the record flag register differ from retail. */
#include "gamedata/GameData.h"

struct SavedRecordState {
    u8 unk00[0x16]; // 0x00
    u8 flags;       // 0x16
    u8 unk17[0x39]; // 0x17
};

struct SavedRecordBlock {
    u8 unk0000[0x5f5c]; // 0x0000
    SavedRecordState records[0x500]; // 0x5f5c
};

extern "C" GameDataBlocksA g_gameDataBlocks;

// Advance record state bits from 01 to 10, preserving the low six bits.
extern "C" void FUN_00331410()
{
    SavedRecordBlock* block = (SavedRecordBlock*)g_gameDataBlocks.saveBlock;
    for (s32 index = 0; index < 0x500; ++index) {
        SavedRecordState* record = &block->records[index];
        u8 flags = record->flags;
        if ((flags >> 6) == 1) {
            record->flags = (flags & ~0xc0u) | 0x80;
        }
    }
}
