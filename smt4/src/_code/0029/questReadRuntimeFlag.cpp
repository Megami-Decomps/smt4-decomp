#include "quest_center/QuestRuntime.h"
#include "quest_center/QuestStatus.h"

extern "C" {

extern u32 goalConditionsSatisfied(u32 questId);

/* Read a runtime quest flag, or query its completion state. */
u32 questReadRuntimeFlag(u32 questId, u32 selector)
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

} /* extern "C" */
