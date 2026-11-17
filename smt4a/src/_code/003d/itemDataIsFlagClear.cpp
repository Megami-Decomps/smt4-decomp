#include "common.h"
#include "quest_center/QuestRecordA.h"

extern "C" {

u32 itemDataIsFlagClear(u32 id)
{
    QuestRecordA *item = questDataGetRecord(id);
    return item != NULL ? (1u & ~item->flags) : 0;
}

} /* extern "C" */
