#include "common.h"
#include "quest_center/QuestRecordA.h"
#include "code/Code001b.h"

extern "C" {

/* Reads the record's byte, returning zero when absent. */
s32 FUN_001bd118(u32 id)
{
    QuestRecordA *record = dataTable1bOr1cGetRecord(id);
    return record != NULL ? record->kind : 0;
}
}
