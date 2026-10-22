#include "common.h"

// Private view of a table entry; only the first two bytes are known.
namespace {

struct TableEntryView {
    u8 unk00;          // 0x00
    u8 unk01;          // 0x01
    u8 unk02[0xA2];    // 0x02
};

}

extern "C" {

extern void* dataTableGet(u32 tableId, u32 tableIndex);
extern void* dataTableGetEntries(void* table);
extern s32 dataTableGetCount(void* table);

// Return the zero-based matching occurrence of an entry with the requested first two bytes.
TableEntryView* dataTableFindEntryOccurrenceByBytePair(u32 firstByte, u32 secondByte, s32 occurrence)
{
    void* table = dataTableGet(2, 0);
    TableEntryView* entries = static_cast<TableEntryView*>(dataTableGetEntries(table));
    s32 entryCount = dataTableGetCount(table);
    s32 matchCount = 0;

    for (s32 entryIndex = 0; entryIndex < entryCount; ++entryIndex) {
        if (entries[entryIndex].unk00 == firstByte &&
            entries[entryIndex].unk01 == secondByte) {
            if (matchCount == occurrence) {
                return &entries[entryIndex];
            }
            ++matchCount;
        }
    }
    return 0;
}

} // extern "C"
