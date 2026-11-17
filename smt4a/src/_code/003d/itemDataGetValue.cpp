#include "quest_center/QuestRecordA.h"
#include "code/Code003d_Smt4a.h"

extern "C" {



u32 itemDataGetValue(u32 id)
{
    QuestRecordA *record = questDataGetRecord(id);
    return record != NULL ? record->value : 0;
}

} /* extern "C" */
