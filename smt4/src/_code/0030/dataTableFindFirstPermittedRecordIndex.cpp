#include "common.h"

// Private view of the record prefix accessed by this function.
struct Table2fSub0RecordView {
    s32 identifier;    // 0x00
    s16 requiredFlag;  // 0x04
    s16 excludedFlag;  // 0x06
};

extern "C" {
s32 dataTable2fSub0GetCount(void);
const Table2fSub0RecordView* dataTable2fSub0GetRecord(s32 index);
s32 gameFlagIsSet(s32 flag);

// Find the first permitted matching record, stopping at the sentinel.
s32 dataTableFindFirstPermittedRecordIndex(s32 identifier)
{
    for (s32 index = 0; index < dataTable2fSub0GetCount(); ++index) {
        const Table2fSub0RecordView* record = dataTable2fSub0GetRecord(index);
        if (record->identifier == -1) {
            break;
        }
        if (record->identifier == identifier &&
            (record->requiredFlag == 0 || gameFlagIsSet(record->requiredFlag) != 0) &&
            (record->excludedFlag == 0 || gameFlagIsSet(record->excludedFlag) == 0)) {
            return index;
        }
    }
    return -1;
}
}
