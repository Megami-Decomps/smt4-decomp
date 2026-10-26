/* NON_MATCHING: bounds-checked record accessor, find-free helper and block pointer (+0x88) now follow retail; remaining diff is the copy loop's induction variables (retail derives index+1 as count-n) and saved-register numbering */
#include "shard/GameDataBlocks.h"

struct HistoryRecord {
    u8 unk00[0x34];
    u16 firstMarker;
    u8 unk36[0x12];
    u16 secondMarker;
    u8 unk4A[2];
};
// The history spans several separately recovered save-data views.
struct HistoryBlock {
    u8 unk00000[0x2478C];
    HistoryRecord records[12];
};
struct HistoryView {
    u8 unk00000[0x88];
    HistoryBlock block;
};
typedef char HistoryRecordSizeCheck[sizeof(HistoryRecord) == 0x4C ? 1 : -1];

static __inline HistoryBlock *saveHistory(void)
{
    return &reinterpret_cast<HistoryView *>(g_gameDataBlocks.saveBlock)->block;
}

/* The history record at `index`, or NULL when the index is out of range. */
static __inline HistoryRecord *historyRecordAt(s32 index)
{
    HistoryRecord *record = NULL;

    if ((u32)index < 12) {
        HistoryBlock *block = saveHistory();
        record = &block->records[index];
    }
    return record;
}

/* Index of the first unused record, or -1 when the history is full. */
static __inline s32 historyFindFree(void)
{
    HistoryBlock *block = saveHistory();

    for (s32 index = 0; index < 12; ++index) {
        HistoryRecord *record = &block->records[index];
        if (!record->firstMarker && !record->secondMarker) {
            return index;
        }
    }
    return -1;
}

extern "C" {
void memCopy(const void* source, void* destination, s32 size);

// Insert a record at the front of the save history, discarding the oldest when full.
void FUN_002cef34(const void* source)
{
    s32 count = historyFindFree();
    if (count == -1) {
        count = 11;
    }
    for (s32 i = count; i > 0; --i) {
        memCopy(historyRecordAt(i - 1), historyRecordAt(i), sizeof(HistoryRecord));
    }
    memCopy(source, &saveHistory()->records[0], sizeof(HistoryRecord));
}
}
