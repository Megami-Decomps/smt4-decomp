/* NON_MATCHING: The enabled constant stays live in r6, enlarging the save set; final menu-state stores are scheduled differently. */
#include "shard/W5_W5Match7_UiQuest.h"

extern "C" {
void uiSpriteSetKeyframe(void *sprite, u32 keyframe, u32 flags);
void uiSpriteSetImageKeyframe(void *sprite, u32 image, u32 keyframe);
void FUN_003d498c(u32 questId, u32 mode);
void uiQuestSpritesCreate(void);
u8 FUN_001bd100(u32 questId);

/* Selects a quest, creates its sprites and enters the quest-detail transition. */
void FUN_0038b710(u32 questId)
{
    UiQuestApoc *quest = g_uiQuest;
    quest->unk93E = 1;
    quest->unk90c = FUN_001bd100(questId);
    quest->questId = (s16)questId;
    uiQuestSpritesCreate();
    FUN_003d498c(questId, 1);
    uiSpriteSetKeyframe(quest->mainSprite, 0, 0);
    uiSpriteSetImageKeyframe(quest->mainSprite, 8, 0);
    UiQuestApoc *current = g_uiQuest;
    current->previousMenuState = current->menuState;
    current->menuState = 1;
    current->menuTimer = 0;
    quest->nextMenuState = 0x1c;
}
}
