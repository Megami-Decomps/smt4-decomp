#include "common.h"
#include "quest_center/QuestRecord.h"
#include "quest_center/QuestRuntime.h"
#include "quest_center/QuestStatus.h"
#include "quest_center/QuestStatus_Smt4.h"

extern "C" {

/* Counts the records (of 400) that reference `id` through either id field and, when `checkFlag` is set, whose flag byte has bit 0. */
int questCountLinkedQuests(u32 id, int checkFlag)
{
    int count = 0;
    int i;

    for (i = 0; i < 400; i++) {
        QuestRecord *record = questDataGetRecord((u16)i);

        if (record != NULL && (record->excludedQuests[0] == id || record->excludedQuests[1] == id)
            && (checkFlag == 0 || questReadRuntimeFlagInline(static_cast<u16>(i), 0) != 0)) {
            count++;
        }
    }
    return count;
}

} /* extern "C" */
