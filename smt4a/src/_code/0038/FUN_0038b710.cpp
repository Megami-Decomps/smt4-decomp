#include "shard/W5_W5Match7_UiQuest.h"
#include "code/Code001b.h"

extern "C" {
void uiSpriteSetKeyframe(void *sprite, u32 keyframe, u32 flags);
void uiSpriteSetImageKeyframe(void *sprite, u32 image, u32 keyframe);
void uiQuestLoadDetailText(u32 questId, u32 mode);
void uiQuestSpritesCreate(void);

/* Selects a quest, creates its sprites and enters the quest-detail transition. */
void FUN_0038b710(u32 questId)
{
    UiQuestApoc *quest = g_uiQuest;
    quest->unk93E = 1;
    quest->unk90c = dataTable1bOr1cRecordHasFlag1(questId);
    quest->questId = (s16)questId;
    uiQuestSpritesCreate();
    uiQuestLoadDetailText(questId, 1);
    uiSpriteSetKeyframe(quest->mainSprite, 0, 0);
    uiSpriteSetImageKeyframe(quest->mainSprite, 8, 0);
    uiQuestEnterMenuState(g_uiQuest, 1);
    quest->nextMenuState = 0x1c;
}
}
