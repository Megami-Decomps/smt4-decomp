#include "quest_center/QuestRecordA.h"

extern "C" {



u32 itemDataGetCategory(u32 id)
{
    QuestRecordA *record = dataTable1bOr1cGetRecord(id);
    return record != NULL ? record->category : 0;
}

} /* extern "C" */
