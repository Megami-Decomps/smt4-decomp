/* NON_MATCHING: redundant native sentinel/index guards are omitted; reverse-copy and address lowering differ. */
#include "shard/GameDataBlocks.h"

extern "C" {
void memCopy(const void* source, void* destination, s32 size);

// Insert a record at the front of the save history, discarding the oldest when full.
void FUN_002cef34(const void* source)
{
    struct HistoryRecord {
        u8 unk00[0x34];
        u16 firstMarker;
        u8 unk36[0x12];
        u16 secondMarker;
        u8 unk4A[2];
    };
    // The history spans several separately recovered save-data views.
    struct HistoryView {
        u8 unk00000[0x24814];
        HistoryRecord records[12];
    };
    typedef char HistoryRecordSizeCheck[sizeof(HistoryRecord) == 0x4C ? 1 : -1];
    HistoryView* history = reinterpret_cast<HistoryView*>(g_gameDataBlocks.saveBlock);
    s32 count = 0;
    for (; count < 12; ++count) {
        if (!history->records[count].firstMarker && !history->records[count].secondMarker) {
            break;
        }
    }
    if (count == 12) {
        count = 11;
    }
    for (s32 index = count - 1; index >= 0; --index) {
        memCopy(&history->records[index], &history->records[index + 1], sizeof(HistoryRecord));
    }
    memCopy(source, &history->records[0], sizeof(HistoryRecord));
}
}
