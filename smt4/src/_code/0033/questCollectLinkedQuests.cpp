#include "common.h"
#include "quest_center/QuestRecord.h"
#include "quest_center/QuestRuntime.h"
#include "quest_center/QuestStatus.h"
#include "quest_center/QuestStatus_Smt4.h"

extern "C" {

/* Collects the ids of all quests tied to `area` into `out`, optionally only those whose runtime status has bit 0 set. */
void questCollectLinkedQuests(u32 area, u16 *out, s32 onlyActive)
{
    s32 count = 0;

    for (s32 id = 0; id < 400; id++) {
        QuestRecord *record = questDataGetRecord((u16)id);

        if (record != NULL && (record->excludedQuests[0] == area || record->excludedQuests[1] == area)
            && (onlyActive == 0 || questReadRuntimeFlagInline(static_cast<u16>(id), 0) != 0)) {
            out[count++] = id;
        }
    }
}

} /* extern "C" */
