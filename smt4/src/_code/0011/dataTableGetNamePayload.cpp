#include "common.h"
#include "quest_center/QuestRecord.h"

extern "C" {

/* Finds the named-data payload of a table record. */
void *dataTableGetNamePayload(u32 index)
{
    QuestRecord *record = questDataGetRecord(index);
    return record != NULL ? record->payload : NULL;
}

} /* extern "C" */
