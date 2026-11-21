#include "quest_center/QuestRecord.h"
#include "quest_center/QuestText.h"

// Select the title or description of an existing quest.
extern "C" const char *questGetTitleOrDescription(u32 id, s32 description)
{
    QuestRecord *record = questDataGetRecord(id);
    if (record == NULL)
        return NULL;
    if (description == 0)
        return record->title;
    return record->description;
}
