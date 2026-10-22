#include "shard/W6_W6Match2_RecordValue.h"

// Store a record value, capped at four decimal digits.
extern "C" u32 gameRecordSetValueClamped(u32 recordIndex, u32 value)
{
    if (recordIndex >= 0x501) {
        return 0;
    }
    RecordValueBlock* block = (RecordValueBlock*)g_gameDataBlocks.saveBlock;
    RecordValue* record = &block->records[recordIndex];
    value = (u16)value;
    record->value = value;
    if (value > 9999) {
        record->value = 9999;
    }
    return 1;
}
