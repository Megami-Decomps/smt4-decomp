#include "quest_center/QuestRuntime.h"
#include "quest_center/QuestRecord.h"
#include "shard/GameDataBlocks.h"

extern "C" {
GameSaveBody *gameDataBlocksGetSaveData(void);
u32 questReadRuntimeFlag(u32 questId, u32 selector);
s32 questRequirementsMet(u32 questId);
QuestRuntimeFlagBlock *gameGetFlagBlock(void);
s32 table1bOr1cGetRecordValue(u32 questId);
void gameFlagEntryActivate(u32 questId);

/* Activate newly eligible category-six quests and snapshot their progress bookkeeping. */
u32 questActivateEligibleCategorySix(void)
{
    GameSaveBody *save = gameDataBlocksGetSaveData();
    save->questSnapshot.value = save->playSeconds;
    u32 changed = 0;
    for (s32 index = 0; index < 400; ++index) {
        if (!questReadRuntimeFlag(static_cast<u16>(index), 0)) {
            const QuestRecord *definition = questDataGetRecord(static_cast<u16>(index));
            if (definition && definition->kind == 6 && !(definition->flags & 1) &&
                questRequirementsMet(static_cast<u16>(index))) {
                u16 questId = static_cast<u16>(index);
                QuestRuntimeStatus *status = &gameGetFlagBlock()->quests[questId];
                status->progress = 0;
                status->stateFlags &= ~1;
                status->flags &= ~0xC0;
                status->flags |= 0x21;
                if (!table1bOr1cGetRecordValue(questId)) {
                    gameFlagEntryActivate(questId);
                }
                changed = 1;
            }
        }
    }
    return changed;
}
}
