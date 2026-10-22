#include "common.h"

namespace {

struct RecordView {
    u16 unk00;       // 0x00
    u16 unk02;       // 0x02
    u32 unk04[7];    // 0x04
};

struct RecordListView {
    s16 count;              // 0x00
    u16 unk02;              // 0x02
    RecordView records[1];  // 0x04: trailing record storage; capacity unknown
};

}

// Append the complete record unless an existing record has the same first halfword.
extern "C" void recordListAppendUniqueKey(RecordListView* list, const RecordView* record)
{
    const s32 count = list->count;

    for (s32 index = 0; index < count; ++index) {
        if (list->records[index].unk00 == record->unk00) {
            return;
        }
    }

    list->records[count] = *record;
    list->count = static_cast<s16>(list->count + 1);
}
