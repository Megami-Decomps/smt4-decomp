/* NON_MATCHING: quest/id-list saved registers differ, and menu-state stores combine into STRD rather than retail's individual stores. */
#include "shard/W5_W5Match7_UiQuest.h"
#include "util/CalleeContracts.h"
#include "shard/W6_W6Match3_ScrollSelection.h"

extern "C" {
s32 objectApplyIfUnblocked(void *cursor);
void uiQuestSpritesCreate(void);
void FUN_003d498c(u32 quest, s32 mode);
void uiSpriteSetKeyframe(void *sprite, s32 sequence, s32 mode);
void uiSpriteSetImageKeyframe(void *sprite, s32 sequence, s32 mode);
void sysPlaySe(u32 sound);
void sysPlayVoice(u32 sound);

// Select a quest in its owning list and animate the detail view open.
void FUN_003a7c3c(u32 quest)
{
    UiQuestApoc *work = g_uiQuest;
    work->questId = quest;
    s32 alternate = FUN_001bd100(quest);
    void *cursor = alternate != 0 ? work->alternateView()->cursor : work->cursor;
    work->unk90c = alternate;
    u16 *ids = alternate != 0 ? work->alternateView()->list : work->list;
    work->unk93E = 1;
    for (s32 index = 0; index < objectApplyIfUnblocked(cursor); ++index) {
        if (ids[index] == quest) {
            FUN_002a4964(reinterpret_cast<ScrollSelection *>(cursor), index);
            break;
        }
    }
    uiQuestSpritesCreate();
    FUN_003d498c(quest, 0);
    uiSpriteSetKeyframe(work->mainSprite, 0, 0);
    uiSpriteSetKeyframe(work->detailAnimation.sprite, 2, 0);
    uiSpriteSetImageKeyframe(work->mainSprite, 8, 0);
    uiSpriteSetImageKeyframe(work->detailAnimation.sprite, 9, 0);
    work = g_uiQuest;
    work->previousMenuState = work->menuState;
    work->menuState = 23;
    work->menuTimer = 0;
    sysPlaySe(26);
    sysPlayVoice(0x1000308);
}
}
