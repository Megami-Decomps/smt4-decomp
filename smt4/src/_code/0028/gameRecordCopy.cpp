#include "shard/W6_W6Match2_RecordValue.h"

// Copy one complete saved record when its index is valid.
extern "C" bool gameRecordCopy(u32 recordIndex, RecordValue* destination)
{
    if (recordIndex > 0x500) {
        return false;
    }
    RecordValueBlock* block = (RecordValueBlock*)g_gameDataBlocks.unk04;
    const RecordValue* record = &block->records[recordIndex];
    *destination = *record;
    return true;
}
