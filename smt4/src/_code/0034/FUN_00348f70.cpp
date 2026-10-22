/* NON_MATCHING: only the two updated quest flag bytes use different temporary registers. */
#include "quest_center/QuestRuntime.h"
#include "shard/GameDataBlocks.h"

extern "C" {
GameSaveData *gameDataBlocksGetSaveData(void);
u32 questReadRuntimeFlag(u32 questId, u32 selector);
const QuestRuntimeDefinition *dataTable1bOr1cGetRecord(u32 questId);
s32 questRequirementsMet(u32 questId);
QuestRuntimeFlagBlock *gameGetFlagBlock(void);
s32 FUN_00287894(u32 questId);
void FUN_0028eeb8(u32 questId);

/* Activate newly eligible category-six quests and snapshot their progress bookkeeping. */
u32 FUN_00348f70(void)
{
    GameSaveData *save = gameDataBlocksGetSaveData();
    save->questSnapshot.value = save->questCurrentValue;
    u32 changed = 0;
    for (s32 index = 0; index < 400; ++index) {
        if (!questReadRuntimeFlag(static_cast<u16>(index), 0)) {
            const QuestRuntimeDefinition *definition = dataTable1bOr1cGetRecord(static_cast<u16>(index));
            if (definition && definition->kind == 6 && !(definition->flags & 1) &&
                questRequirementsMet(static_cast<u16>(index))) {
                u16 questId = static_cast<u16>(index);
                QuestRuntimeStatus *status = &gameGetFlagBlock()->quests[questId];
                status->progress = 0;
                status->stateFlags &= ~1;
                status->flags = (status->flags & ~0xC0) | 0x21;
                if (!FUN_00287894(questId)) {
                    FUN_0028eeb8(questId);
                }
                changed = 1;
            }
        }
    }
    return changed;
}
}
