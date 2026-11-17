#include "common.h"
#include "quest_center/QuestRecord.h"
#include "gamedata/Table1bOr1c.h"

extern "C" {

/* Reads the record's byte, returning zero when absent. */
s32 table1bOr1cGetRecordValue(u32 id)
{
    QuestRecord *record = dataTable1bOr1cGetRecord(id);
    return record != NULL ? record->kind : 0;
}
}
