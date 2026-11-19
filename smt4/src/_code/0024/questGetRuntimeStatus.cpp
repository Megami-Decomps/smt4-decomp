#include "gamedata/GameDataAccess_VariantA.h"
#include "quest_center/QuestRuntime.h"
#include "quest_center/QuestStatus.h"

extern "C" {

QuestRuntimeStatus *questGetRuntimeStatus(u32 questId)
{
    QuestRuntimeFlagBlock *block = reinterpret_cast<QuestRuntimeFlagBlock *>(gameGetFlagBlock());
    return &block->quests[questId];
}

} /* extern "C" */
