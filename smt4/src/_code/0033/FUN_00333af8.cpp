/* NON_MATCHING: only the argument uxth is predicated (uxthne before the beq) in retail */
#include "common.h"
#include "quest_center/QuestRecord.h"
#include "quest_center/QuestRuntime.h"
#include "quest_center/QuestStatus.h"

extern "C" {

/* Collects the ids of all quests tied to `area` into `out`, optionally only those whose runtime status has bit 0 set. */
void FUN_00333af8(u32 area, u16 *out, s32 onlyActive)
{
    s32 count = 0;

    for (s32 id = 0; id < 400; id++) {
        QuestRecord *record = questDataGetRecord((u16)id);

        if (record != NULL && (record->excludedQuests[0] == area || record->excludedQuests[1] == area)) {
            if (onlyActive != 0) {
                if ((questGetRuntimeStatus(static_cast<u16>(id))->flags & 1) == 0) {
                    continue;
                }
            }
            out[count++] = id;
        }
    }
}

} /* extern "C" */
