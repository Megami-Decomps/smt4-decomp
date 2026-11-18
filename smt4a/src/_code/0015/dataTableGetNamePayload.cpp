#include "common.h"
#include "quest_center/QuestRecordA.h"

/* The quest's named-data payload (IV: dataTableGetNamePayload), 0x38 bytes into the record's title block;
 * NULL for a missing id. */
extern "C" u8* dataTableGetNamePayload(u32 questId)
{
    QuestRecordA* record = questDataGetRecord(questId);
    return record ? reinterpret_cast<u8*>(&record->title[0x38]) : 0;
}
