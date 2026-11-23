#pragma once
#include "common.h"
#include "quest_center/QuestRuntime.h"
#include "quest_center/QuestStatus.h"

/* QuestStatus (declarations migrated from callers). */
extern "C" {

u16 QcActive_GetField24(void);

/* Whether every goal condition of the quest is met. */
u32 goalConditionsSatisfied(u32 questId);

} /* extern "C" */

/* questReadRuntimeFlag's body, which the quest-list collectors inline (questCountLinkedQuests, questCollectLinkedQuests): a bit of
 * the quest's runtime status picked by `selector` (0-4), or (5) whether its goal conditions are met. */
static __inline u32 questReadRuntimeFlagInline(u32 questId, u32 selector)
{
    u32 result = 0;
    const QuestRuntimeStatus *status = questGetRuntimeStatus(questId);
    switch (selector) {
    case 0: result = status->flags & 1; break;
    case 1: result = (status->flags & 2) >> 1; break;
    case 2: result = (status->flags & 4) >> 2; break;
    case 4: result = (status->flags & 0x10) >> 4; break;
    case 5: result = goalConditionsSatisfied(questId); break;
    case 3: result = (status->flags & 8) >> 3; break;
    }
    return result;
}
