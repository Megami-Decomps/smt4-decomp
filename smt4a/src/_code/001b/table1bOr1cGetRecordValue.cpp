#include "common.h"
#include "quest_center/QuestRecordA.h"
#include "code/Code001b.h"

extern "C" {

/* Reads the record's byte, returning zero when absent. */
s32 table1bOr1cGetRecordValue(u32 id)
{
    QuestRecordA *record = questDataGetRecord(id);
    return record != NULL ? record->kind : 0;
}
}
