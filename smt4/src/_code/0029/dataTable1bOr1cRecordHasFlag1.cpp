#include "common.h"
#include "quest_center/QuestRecord.h"
#include "code/Code0029.h"

extern "C" {
/* Reads or forwards the current state. */
u32 dataTable1bOr1cRecordHasFlag1(u32 id)
{
    QuestRecord *record = questDataGetRecord(id);
    return record != NULL ? record->flags & 1 : 0;
}
}
