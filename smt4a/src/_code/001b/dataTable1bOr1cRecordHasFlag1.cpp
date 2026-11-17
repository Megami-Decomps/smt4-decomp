#include "common.h"
#include "quest_center/QuestRecordA.h"
#include "code/Code001b.h"

extern "C" {
/* Reads or forwards the current state. */
u32 dataTable1bOr1cRecordHasFlag1(u32 id)
{
    QuestRecordA *record = dataTable1bOr1cGetRecord(id);
    return record != NULL ? record->flags & 1 : 0;
}
}
