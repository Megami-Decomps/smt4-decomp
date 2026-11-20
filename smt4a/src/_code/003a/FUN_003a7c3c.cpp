#include "shard/W5_W5Match7_UiQuest.h"
#include "code/Code001b.h"
#include "shard/W6_W6Match3_ScrollSelection.h"

extern "C" {
s32 gridNavigationGetItemCount(void *cursor);
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
    s32 alternate = dataTable1bOr1cRecordHasFlag1(quest);
    work->unk90c = alternate;
    work->unk93E = 1;
    void *cursor;
    u16 *ids;
    if (alternate != 0) {
        cursor = work->alternateView()->cursor;
        ids = work->alternateView()->list;
    } else {
        cursor = work->cursor;
        ids = work->list;
    }
    for (s32 index = 0; index < gridNavigationGetItemCount(cursor); ++index) {
        if (ids[index] == quest) {
            scrollListSetSelectionTracked(reinterpret_cast<ScrollSelection *>(cursor), index);
            break;
        }
    }
    uiQuestSpritesCreate();
    FUN_003d498c(quest, 0);
    uiSpriteSetKeyframe(work->mainSprite, 0, 0);
    uiSpriteSetKeyframe(work->detailAnimation.sprite, 2, 0);
    uiSpriteSetImageKeyframe(work->mainSprite, 8, 0);
    uiSpriteSetImageKeyframe(work->detailAnimation.sprite, 9, 0);
    uiQuestEnterMenuState(g_uiQuest, 23);
    sysPlaySe(26);
    sysPlayVoice(0x1000308);
}
}
