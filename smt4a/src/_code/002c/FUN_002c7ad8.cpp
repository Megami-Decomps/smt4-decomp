/* NON_MATCHING: record-loop pointer advancement and pending-field addressing differ. */
#include "gamedata/GameData.h"

extern "C" {
extern GameDataBlocksA g_gameDataBlocks;

// Canonicalize saved record ids and clear each corresponding record's pending value.
void FUN_002c7ad8(void)
{
    // The shared byte-aligned save view cannot acquire aligned record fields.
    struct SavedRecordView {
        u8 unk00[0x10];
        s32 id; // 0x10
        u32 pending; // 0x14
        u8 unk18[0x10];
    };
    struct SaveRecordsView {
        u8 unk00000[0x29500];
        SavedRecordView records[16];
    };
    SavedRecordView *records = reinterpret_cast<SaveRecordsView *>(g_gameDataBlocks.saveBlock)->records;
    for (s32 source = 0; source < 16; ++source) {
        if (records[source].id == 0)
            continue;
        s32 id = static_cast<s16>(records[source].id);
        SavedRecordView *empty = NULL;
        SavedRecordView *found = NULL;
        for (s32 index = 0; index < 16; ++index) {
            SavedRecordView *record = &records[index];
            if (record->id == 0 && empty == NULL)
                empty = record;
            if (record->id == id) {
                found = record;
                break;
            }
        }
        if (found == NULL)
            found = empty;
        if (found->id == 0)
            found->id = id;
        found->pending = 0;
    }
}
}
