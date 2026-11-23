#include "quest_center/QuestRuntime.h"
#include "quest_center/QuestStatus.h"
#include "quest_center/QuestStatus_Smt4.h"

extern "C" {

/* Read a runtime quest flag, or query its completion state: the out-of-line copy of questReadRuntimeFlagInline
 * (quest_center/QuestStatus_Smt4.h), which the quest-list collectors inline. */
u32 questReadRuntimeFlag(u32 questId, u32 selector)
{
    return questReadRuntimeFlagInline(questId, selector);
}

} /* extern "C" */
