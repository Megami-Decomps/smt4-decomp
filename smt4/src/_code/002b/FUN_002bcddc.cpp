#include "quest_center/QuestRecord.h"
#include "quest_center/QuestText.h"

// Select the title or description of an existing quest.
extern "C" const char *FUN_002bcddc(u32 id, s32 description)
{
    QuestRecord *record = questDataGetRecord(id);
    if (record == NULL)
        return NULL;
    return description == 0 ? record->title : record->description;
}
