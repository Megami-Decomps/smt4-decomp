#include "common.h"
#include "quest_center/QuestRecordA.h"

/* The quest's title, NULL for an unknown quest. Both text kinds (0 from the quest lists, 1 from the message
 * expander) give the title: armcc merges the two arms and drops their test, keeping only retail's dead copy of
 * `kind` (mov r4, r1). */
extern "C" const char *questDataGetTitle(u32 id, u32 kind)
{
    QuestRecordA *record = questDataGetRecord(id);
    if (record == NULL)
        return NULL;
    if (kind == 0)
        return record->title;
    else
        return record->title;
}
