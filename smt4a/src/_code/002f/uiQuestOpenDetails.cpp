#include "code/Code001b.h"
#include "quest_center/QuestRecordA.h"
#include "shard/W5_W5Match7_UiQuest.h"
#include "ui/UiSpriteApi.h"

extern "C" {
void uiQuestSpritesCreate(void);
void uiQuestLoadDetailText(u32 id, u32 mode);

/* Opens quest details and selects the detail layout indicated by the quest flags. */
void uiQuestOpenDetails(u32 questId)
{
    UiQuestApoc *quest = g_uiQuest;
    quest->unk93E = 1;
    quest->unk90c = dataTable1bOr1cRecordHasFlag1(questId);
    quest->questId = questId;
    uiQuestSpritesCreate();
    uiQuestLoadDetailText(questId, 1);
    uiSpriteSetKeyframe(quest->sprite(0), 0, 0);
    uiSpriteSetImageKeyframe(quest->sprite(0), 8, 0);
    uiQuestEnterMenuState(g_uiQuest, 1);
    quest->nextMenuState = 0x1D;
    const QuestRecordA *record = questDataGetRecord(questId);
    if (record->flags & 0x20) {
        quest->listState.selection = 2;
    } else {
        quest->listState.selection = 1;
    }
}
} /* extern "C" */
